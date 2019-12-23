#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,t,a,h; cin>>n>>t>>a; t*=1000; a*=1000;
	int mn=1e9, ret=-1;
	for (int i=0; i<n; i++) {
		cin>>h;
		int cur=abs(t-6*h - a);
		if(cur<mn)
			mn=cur, ret=i+1;
	}
	cout << ret << endl;
	return 0;
}
