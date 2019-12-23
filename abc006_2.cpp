#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+777, mod=10007;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> a(mx,0);
	a[2]=1;
	for (int i=3; i<mx; i++)
		a[i]=(a[i-1]+a[i-2]+a[i-3])%mod;
	int n; cin>>n; cout << a[n-1] << endl;
	return 0;
}
