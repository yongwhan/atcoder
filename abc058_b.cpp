#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int l=t.size();
	for (int i=0; i<l; i++)
		cout << s[i] << t[i];
	if(s.size()!=l)
		cout << s[l];
	cout << endl;
	return 0;
}
