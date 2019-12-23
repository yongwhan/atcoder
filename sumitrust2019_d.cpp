#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	vector<vector<bool>> poss(n,vector<bool>(1000,false)), poss2=poss, poss3=poss;
	poss[0][s[0]-'0']=true;
	for (int i=1; i<n; i++) {
		poss[i]=poss[i-1];
		poss[i][s[i]-'0']=true;
	}

	for (int i=1; i<n; i++) {
		poss2[i]=poss2[i-1];
		for (int j=0; j<10; j++)
			if(poss[i-1][j])
				poss2[i][j*10+s[i]-'0']=true;
	}

	for (int i=2; i<n; i++) {
		poss3[i]=poss3[i-1];
		for (int j=0; j<100; j++)
			if(poss2[i-1][j])
			poss3[i][j*10+s[i]-'0']=true;
	}
	int ret=0;
	for (int i=0; i<1000; i++)
		if(poss3[n-1][i])
			ret++;
	cout<<ret<<"\n";
	return 0;
}
