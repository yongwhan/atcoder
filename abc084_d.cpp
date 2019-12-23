#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int mx=1e5+777;

vector<bool> flag;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	flag.resize(mx,true);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;
	vector<int> sim(mx,0);
	for (int i=1; i<mx; i+=2)
		if(flag[i]&&flag[(i+1)/2])
			sim[i]=1;
	vector<int> cum(mx,0);
	for (int i=1; i<mx; i++) {
		cum[i]+=cum[i-1];
		if(sim[i])
			cum[i]++;
	}
	
	int q; cin>>q;
	while(q--) {
		int l,r; cin>>l>>r;
		cout<<cum[r]-cum[l-1]<<"\n";
	}
	return 0;
}
