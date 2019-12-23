#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	if(s[0]!='A') {
		cout << "WA" << endl;
		return 0;
	}
	s[0]=' ';
	int n=s.size();
	bool C=false;
	for (int i=2; i<n-1; i++)
		if(s[i]=='C') {
			s[i]=' ';
			C=true;
			break;
		}
	if(!C) {
		cout << "WA" << endl;
		return 0;
	}
	for (auto ch : s)
		if(ch!=' '&&isupper(ch)) {
			cout << "WA" << endl;
			return 0;
		}
	cout << "AC" << endl;
	return 0;
}
