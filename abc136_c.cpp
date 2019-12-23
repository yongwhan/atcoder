#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> h(n);
	for (int i=0; i<n; i++)
		cin>>h[i];
	h[0]--;
	for (int i=1; i<n; i++) {
		if(h[i]-1>=h[i-1])
			h[i]--;
		if(h[i]<h[i-1]) {
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}
