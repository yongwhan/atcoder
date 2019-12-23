#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,c,k; cin>>n>>c>>k;
	vector<int> t(n);
	for (int i=0; i<n; i++)
		cin>>t[i];
	sort(t.begin(),t.end());
	int ret=0, idx=0;
	while(1) {
		if(idx>=n) break;
		ret++;
		int lim=t[idx]+k;
		for (int i=0; i<c; i++) {
			if(idx>=n) break;
			if(t[idx]<=lim) idx++;
			else break;
		}
	}
	cout << ret << endl;
	return 0;
}
