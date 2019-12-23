#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int ret=1e9;
	for (int d=1; d<=n; d++) {
		int e=n/d;
		ret=min(ret,abs(d-e)+(n-d*e));
	}
	cout << ret << endl;
	return 0;
}
