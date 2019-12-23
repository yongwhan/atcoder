#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,mn=1e9,m; cin>>n>>x;
	for (int i=0; i<n; i++) {
		cin>>m;
		x-=m;
		mn=min(mn,m);
	}
	cout << n + x/mn << endl;
	return 0;
}
