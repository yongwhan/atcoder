#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	set<int> st;
	for (int d=1; d*d<=m; d++)
		if(m%d==0)
			st.insert(d), st.insert(m/d);
	int ret=0;
	for (auto d : st)
		if(m/d>=n)
			ret=max(ret,d);
	cout<<ret<<"\n";
	return 0;
}
