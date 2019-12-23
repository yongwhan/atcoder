#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int N,T,c,t; cin>>N>>T;
	int ret=inf;
	while(N--) {
		cin>>c>>t;
		if(!(t>T))
			ret=min(ret,c);
	}
	if(ret==inf) { cout << "TLE" << endl; return 0; }
	cout << ret << endl;
	return 0;
}
