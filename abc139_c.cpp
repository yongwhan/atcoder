#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n+1,INT_MAX);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int cur=0, mx=0;
	for (int i=1; i<=n; i++)
		if(a[i]>a[i-1]) mx=max(mx,cur), cur=0;
		else cur++;
	cout<<mx<<"\n";
	return 0;
}
