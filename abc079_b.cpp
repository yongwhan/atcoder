#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=100;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> L(mx);
	L[0]=2; L[1]=1;
	for (int i=2; i<mx; i++)
		L[i]=L[i-1]+L[i-2];
	int n; cin>>n; cout<<L[n]<<endl;
	return 0;
}
