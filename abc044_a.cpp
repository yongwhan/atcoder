#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x,y; cin>>n>>k>>x>>y;
	cout << (n<=k ? x*n : x*k + y*(n-k)) << endl;
	return 0;
}
