#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll x,y; cin>>x>>y;
	int ret=0;
	while(x<=y)
		x<<=1, ret++;
	cout<<ret<<"\n";
	return 0;
}
