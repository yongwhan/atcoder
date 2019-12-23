#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	int g=0;
	for (int i=0; i<n; i++)
		cin>>a[i], g=gcd(g,a[i]);
	for (auto it : a)
		if(it>=k && (it-k)%g==0) {
			cout << "POSSIBLE" << endl;
			return 0;
		}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}
