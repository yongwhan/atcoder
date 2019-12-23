#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,t,a,ret=0; cin>>k>>t;
	while(t-->0)
		cin>>a, ret=max(ret,max(a-1-(k-a),0));
	cout<<ret<<"\n";
	return 0;
}
