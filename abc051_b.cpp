#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,s; cin>>k>>s;
	map<int,int> ct;
	for (int x=0; x<=k; x++)
		for (int y=0; y<=k; y++)
			ct[x+y]++;
	int ret=0;
	for (int z=0; z<=k; z++)
		ret+=ct[s-z];
	cout << ret << endl;
	return 0;
}
