#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,t; cin>>n>>t;
	int ret=t;
	vector<int> a(n,1e9);
	cin>>a[0];
	for (int i=1; i<n; i++) {
		cin>>a[i];
		ret+=min(a[i]-a[i-1],t);
	}
	cout << ret << endl;
	return 0;
}
