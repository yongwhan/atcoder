#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,c; cin>>a>>b>>c;
	cout << (a*((b*c)%mod))%mod << endl;
	return 0;
}
