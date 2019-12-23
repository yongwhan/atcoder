#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	for (int i=0; i<n; i++) {
		if(!i) s[i]=toupper(s[i]);
		else s[i]=tolower(s[i]);
	}
	cout << s << endl;
	return 0;
}
