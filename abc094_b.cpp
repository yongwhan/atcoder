#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x,a,ct=0; cin>>n>>m>>x;
	for (int i=0; i<m; i++) {
		cin>>a;
		if(a<x) ct++;
	}
	cout << min(ct,m-ct) << endl;
	return 0;
}
