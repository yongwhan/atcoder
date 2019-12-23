#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,k; cin>>a>>b>>c>>k;
	int mx=max({a,b,c});
	int ret=a+b+c-mx;
	ret+=mx<<k;
	cout << ret << endl;
	return 0;
}
