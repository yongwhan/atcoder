#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=57;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll binom[mx][mx];
	for (int i=0; i<mx; i++) {
		binom[i][0]=binom[i][i]=1;
		for (int j=1; j<i; j++)
			binom[i][j]=binom[i-1][j]+binom[i-1][j-1];
	}
	map<int,int> ct;
	int n,p,a; cin>>n>>p;
	for (int i=0; i<n; i++)
		cin>>a, ct[a%2]++;
	ll zero=ct[0], one=ct[1];
	ll ret=0;
	for (int i=p; i<=one; i+=2)
		ret+=binom[one][i];
	ret<<=zero;
	cout << ret << endl;
	return 0;
}
