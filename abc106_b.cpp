#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	int ret=0;
	for (int d=1; d<=x; d++)
		if(x%d==0)
			ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int i=1; i<=n; i++)
		if(i%2&&eval(i)==8)
			ret++;
	cout << ret << endl;
	return 0;
}
