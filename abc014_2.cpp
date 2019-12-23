#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,b; cin>>n>>b;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int ret=0;
	for (int i=0; i<n; i++)
		ret+=(b%2)*a[i], b>>=1;
	cout << ret << endl;
	return 0;
}
