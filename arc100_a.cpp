#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], a[i]-=(i+1);
	sort(a.begin(), a.end());
	ll ret=0, med=a[n/2];
	for (auto it : a)
		ret+=abs(it-med);
	cout << ret << endl;
	return 0;
}
