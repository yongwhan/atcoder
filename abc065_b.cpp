#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> p(n+1,0);
	for (int i=1; i<=n; i++) cin>>p[i];
	int cur=1;
	for (int i=1; i<=2*n; i++) {
		cur=p[cur];
		if(cur==2) { cout << i << endl; return 0; }
	}
	cout << -1 << endl;
	return 0;
}
