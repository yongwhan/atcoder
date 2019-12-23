#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int x,y;
	map<int,int> deg;
	for (int i=0; i<m; i++) {
		cin>>x>>y;
		deg[x]++; deg[y]++;
	}
	for (int i=1; i<=n; i++)
		cout << deg[i] << endl;
	return 0;
}
