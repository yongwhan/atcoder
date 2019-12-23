#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	if(s.size()>1) {
		cout << s.substr(0,s.size()-1) << endl;
		return 0;
	}
	if(s[0]=='a') {
		cout << -1 << endl;
		return 0;
	}
	s[0]--;
	cout << s << endl;
	return 0;
}
