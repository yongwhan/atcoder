#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool str_greater(string &s, string &t) {
	int n=s.size(), m=t.size();
	if(n<m) return false;
	if(n>m) return true;
	for (int i=0; i<n; i++)
		if(s[i]<t[i]) return false;
		else if(s[i]>t[i]) return true;
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	if(s==t) cout << "EQUAL";
	else cout << (str_greater(s,t) ? "GREATER" : "LESS");
	cout << endl;
	return 0;
}
