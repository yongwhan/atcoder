#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,T,t; cin>>n>>T;
	int ret=T, prev=0;
	for (int i=0; i<n; i++) {
		cin>>t;
		if(prev+T>=t) ret+=t-prev;
		else ret+=T;
		prev=t;
	}

	cout << ret << endl;
	return 0;
}
