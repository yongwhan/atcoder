#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,a,b; cin>>n>>a>>b;
	if(n==1) {
		cout << (a==b ? 1 : 0) << endl;
		return 0;
	}
	cout << max(0LL, (b-a)*(n-2) + 1) << endl;
	return 0;
}
