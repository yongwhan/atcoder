#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		cin>>x;
		ct[x]++;
	}

	int ret=1;
	if( (n%2 && ct[0]!=1) || (n%2==0 && ct[0]!=0) ) ret=0;
	for (int i=n-1; i>0; i-=2) {
		if(ct[i]!=2)
			ret=0;
		ret=(ret*2)%mod;
	}
	cout << ret << endl;
	return 0;
}
