#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	sort(s.begin(), s.end());
	sort(t.rbegin(), t.rend());
	cout << (s<t ? "Yes" : "No") << endl;
	return 0;
}
