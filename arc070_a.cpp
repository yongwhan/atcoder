#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x; cin>>x;
	int cur=0;
	for (int i=1; i<=1e6; i++) {
		cur+=i;
		if(x<=cur) {
			cout<<i<<"\n";
			return 0;
		}
	}
	return 0;
}
