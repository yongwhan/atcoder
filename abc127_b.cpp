#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll r,d,x; cin>>r>>d>>x;
	for (int i=0; i<10; i++) {
		x=r*x-d;
		cout<<x<<"\n";
	}
	return 0;
}
