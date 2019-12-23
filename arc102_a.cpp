#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	map<int,ll> ct;
	for (int i=1; i<=n; i++)
		ct[i%k]++;
	ll ret=0;
	for (int a=0; a<k; a++) {
		int b=(k-a)%k, c=(k-b)%k;
		if((c+a)%k)
			continue;
		ret+=ct[a]*ct[b]*ct[c];
	}
	cout << ret << endl;
	return 0;
}
