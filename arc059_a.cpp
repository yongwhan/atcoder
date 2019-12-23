#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=105, inf=2e9+77;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int ret=inf;
	for (int x=-mx; x<=mx; x++) {
		int cur=0;
		for (int i=0; i<n; i++) {
			int diff=x-a[i];
			cur+=diff*diff;
		}
		ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
