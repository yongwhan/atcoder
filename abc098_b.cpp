#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	int ret=0;
	for (int i=0; i<=n; i++) {
		string a=s.substr(0,i), b=s.substr(i);
		set<char> st(a.begin(), a.end()), cur(b.begin(), b.end());
		int val=0;
		for (auto it : cur)
			if(st.find(it)!=st.end())
				val++;
		ret=max(ret,val);
	}
	cout << ret << endl;
	return 0;
}
