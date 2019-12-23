#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	if(a>=13) cout<<b<<"\n";
	else if(a>=6) cout<<b/2<<"\n";
	else cout<<0<<"\n";
	return 0;
}
