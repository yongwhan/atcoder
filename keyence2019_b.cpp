#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s="keyence";
	string t; cin>>t;
	for (int i=0; i<=s.size(); i++) {
		string a=s.substr(0,i), b=s.substr(i);
		if(t.substr(0,a.size())==a&&t.substr(t.size()-b.size())==b) {
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
