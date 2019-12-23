#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(string &s) {
	int n=s.size();
	string t=s.substr(0,n/2);
	return s==t+t;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	while(!s.empty()) {
		s.pop_back();
		s.pop_back();
		if(ok(s)) { cout << s.size() << endl; return 0; }
	}
	return 0;
}
