#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int f(int x) {
	int ret=0;
	while(x)
		ret+=x%10, x/=10;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	cout << (n%f(n)==0 ? "Yes" : "No") << endl;
	return 0;
}
