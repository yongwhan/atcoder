#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,t; cin>>s>>t;
	for (int i=0; i<n; i++) {
		if(s.substr(i)==t.substr(0,n-i)) {
			string ret=s+t.substr(n-i);
			cout << ret.size() << endl;
			return 0;
		}
	}
	cout << s.size()+t.size() << endl;
	return 0;
}
