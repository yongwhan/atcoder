#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int l,h; cin>>l>>h;
	int n,x; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x<l) cout << l-x << endl;
		else if(x<=h) cout << 0 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
