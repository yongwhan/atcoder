#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<string,int> ct;
	int mx=0;
	string s;
	for (int i=0; i<n; i++) {
		cin>>s;
		ct[s]++;
		mx=max(mx,ct[s]);
	}

	for (auto it : ct)
		if(it.second==mx) {
			cout << it.first << endl;
			return 0;
		}
	return 0;
}
