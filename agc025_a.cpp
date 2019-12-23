#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int sum(int x) {
	int ret=0;
	while(x)
		ret+=x%10, x/=10;
	return ret;
}

int eval(int a, int b) {
	return sum(a)+sum(b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int ret=1e9;
	for (int a=1; a<n; a++)
		ret=min(ret,eval(a,n-a));
	cout << ret << endl;
	return 0;
}
