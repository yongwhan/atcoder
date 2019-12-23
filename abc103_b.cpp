#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string next(string s) {
	string ret=s.substr(1);
	ret+=s[0];
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	set<string> used;
	while(used.find(s)==used.end()) {
		if(s==t) { cout << "Yes" << endl; return 0; }
		used.insert(s);
		s=next(s);
	}
	cout << "No" << endl;
	return 0;
}
