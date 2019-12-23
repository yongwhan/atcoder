#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int g=gcd(a,b);
	cout << a/g << ":" << b/g << endl;
	return 0;
}
