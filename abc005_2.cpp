#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,mn=1e9,x; cin>>n;
	for (int i=0; i<n; i++)
		cin>>x, mn=min(mn,x);
	cout << mn << endl;
	return 0;
}
