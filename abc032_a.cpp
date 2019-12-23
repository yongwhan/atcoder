#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int lcm(int a, int b) {
	return a/gcd(a,b)*b;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c; cin>>a>>b>>c;
	int l=lcm(a,b);
	cout << (c+l-1)/l * l << endl;
	return 0;
}
