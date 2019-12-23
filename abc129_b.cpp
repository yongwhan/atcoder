#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	int a[n],pre[n],suf[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	pre[0]=a[0];
	for (int i=1; i<n; i++)
		pre[i]=pre[i-1]+a[i];
	suf[n-1]=a[n-1];
	for(int i=n-2; i>=0; i--)
		suf[i]=suf[i+1]+a[i];
	int ans=INT_MAX;
	for(int i=0; i<n-1; i++)
		ans=min(ans, abs(pre[i]-suf[i+1]));
	cout<<ans<<endl;
	return 0;
}
