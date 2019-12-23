#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(3*n);
	for (int i=0; i<3*n; i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll ret=0;
	for (int i=n; i<3*n; i+=2)
		ret+=a[i];
	cout << ret << endl;
	return 0;
}
