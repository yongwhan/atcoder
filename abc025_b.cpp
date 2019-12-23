#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,x,ret=0; cin>>n>>a>>b;
	string s;
	for (int i=0; i<n; i++) {
		cin>>s>>x;
		x=max(min(x,b),a);
		if(s[0]=='W') x=-x;
		ret+=x;
	}
	cout << (ret ? ret>0 ? "East " : "West " : "") << abs(ret) << endl;
	return 0;
}
