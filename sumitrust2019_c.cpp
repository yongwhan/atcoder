#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int mx=1e5+777;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x; cin>>x;
	vector<bool> poss(mx,false);
	poss[0]=true;
	for (int t=100; t<=105; t++)
		for (int i=0; t+i<mx; i++)
			if(poss[i])
				poss[i+t]=true;
	cout<<poss[x]<<"\n";
	return 0;
}
