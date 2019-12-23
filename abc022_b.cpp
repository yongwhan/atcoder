#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int ret=0;
	map<int,int> ct;
	reverse(a.begin(),a.end());
	for (int i=0; i<n; i++) {
		if(ct[a[i]]) ret++;
		ct[a[i]]++;
	}
	cout << ret << endl;
	return 0;
}
