#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,l; cin>>n>>l;
	vector<string> s(n);
	for (int i=0; i<n; i++) cin>>s[i];
	sort(s.begin(),s.end());
	for (auto x : s)
		cout << x;
	cout << endl;
	return 0;
}
