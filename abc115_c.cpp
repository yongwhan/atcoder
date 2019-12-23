#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> h(n);
	for (int i=0; i<n; i++) cin>>h[i];
	int ret=2e9;
	sort(h.begin(), h.end(), greater<int>());
	for (int i=0; i<=n-k; i++)
		ret=min(ret,h[i]-h[i+k-1]);
	cout << ret << endl;
	return 0;
}
