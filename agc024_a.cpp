#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,c,k; cin>>a>>b>>c>>k;
	cout << (k%2 ? b-a : a-b) << endl;
	return 0;
}
