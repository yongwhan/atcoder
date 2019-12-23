#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	string s; ll k;
	cin>>s>>k;
	int n=s.length(), ans1=0, ans2=0;
	if (s==string(n,s[0])) {
		cout<<1ll*k*n/2<<endl;
		return 0;
	}
	for (int i=0; i+1<n; i++)
		if (s[i]==s[i+1])
			ans1++,i++;
	for (int i=0; i+1<2*n; i++)
		if (s[i%n]==s[(i+1)%n])
			ans2++,i++;
	cout<<ans1+(ans2-ans1)*(k-1)<<endl;
	return 0;
}
