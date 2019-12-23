#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,ret=0,h; cin>>n>>k;
	for (int i=0; i<n; i++) {
		cin>>h;
		if(h>=k) ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
