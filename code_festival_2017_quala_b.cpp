#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k; cin>>n>>m>>k;
	for (int a=0; a<=n; a++)
		for (int b=0; b<=m; b++)
			if((n-a)*b+(m-b)*a==k) {
				cout<<"Yes\n";
				return 0;
			}
	cout<<"No\n";
	return 0;
}
