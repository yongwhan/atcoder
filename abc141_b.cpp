#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	for (int i=0; i<s.size(); i++) {
		if(i%2) {
			if(s[i]=='R') {
				cout<<"No\n";
				return 0;
			}
		} else {
			if(s[i]=='L') {
				cout<<"No\n";
				return 0;
			}
		}
	}
	cout<<"Yes\n";
	return 0;
}
