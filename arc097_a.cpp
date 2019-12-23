#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; int k; cin>>s>>k;
	int n=s.size();
	set<string> st;
	for (int j=1; j<=k; j++)
		for (int i=0; i<=n-j; i++)
			st.insert(s.substr(i,j));
	string ret;
	k--;
	while(k-->0)
		st.erase(st.begin());
	cout<<*st.begin()<<"\n";
	return 0;
}
