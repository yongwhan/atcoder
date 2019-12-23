#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s;
	map<string,int> ct;
	for (int i=0; i<n; i++)
		cin>>s, ct[s]++;
	int m; cin>>m;
	for (int i=0; i<m; i++)
		cin>>s, ct[s]--;
	int ret=0;
	for (auto it : ct)
		ret=max(ret,it.second);
	cout << ret << endl;
	return 0;
}
