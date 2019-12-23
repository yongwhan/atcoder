#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, p, sum=0, mx=0;
	cin>>n;
	while(n--) {
		cin>>p;
		sum+=p;
		mx=max(mx,p);
	}
	cout << sum-mx/2 << endl;
	return 0;
}
