#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	int ret=0;
	while(x)
		ret+=x%10, x/=10;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	int ret=0;
	for (int x=1; x<=n; x++) {
		int s=eval(x);
		if(a<=s&&s<=b)
			ret+=x;
	}
	cout << ret << endl;
	return 0;
}
