#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a=-1, z=-1;
	string s; cin>>s;
	int n=s.size();
	for (int i=0; i<n; i++)
		if(s[i]=='A') { a=i; break; }
	for (int i=n-1; i>=0; i--)
		if(s[i]=='Z') { z=i; break; }
	cout << z-a+1 << endl;
	return 0;
}
