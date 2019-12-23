#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ii> a(n);
	for (int i=1; i<=n; i++) {
		int x; cin>>x;
		a[i-1]={x,i};
	}
	sort(a.begin(),a.end());
	for (auto it : a)
		cout<<it.second<<" ";
	cout<<"\n";
	return 0;
}
