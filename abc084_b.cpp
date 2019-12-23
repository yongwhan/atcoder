#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	string s; cin>>s;
	if(s[a]!='-') {
		cout << "No" << endl;
		return 0;
	}
	if(s.size()!=a+b+1) {
		cout << "No" << endl;
		return 0;
	}
	for (int i=0; i<a+b+1; i++)
		if(i!=a&&!isdigit(s[i])) {
			cout << "No" << endl;
			return 0;
		}
	cout << "Yes" << endl;
	return 0;
}
