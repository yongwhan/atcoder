#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, sum=0; cin>>n;
	map<string,int> ct;
	for (int i=0; i<n; i++) {
		string s; int x; cin>>s>>x;
		ct[s]=x;
		sum+=x;
	}

	for (auto it : ct)
		if(it.second*2>sum) {
			cout << it.first << endl;
			return 0;
		}
	cout << "atcoder" << endl;
	return 0;
}
