#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0,x; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>x, ct[x]++;
	for (auto it : ct) {
		int key=it.first, value=it.second;
		ret+=value - ((value<key) ? 0 : key);
	}
	cout << ret << endl;
	return 0;
}
