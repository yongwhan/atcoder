#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n>>a;
	n%=500;
	cout << (n<=a ? "Yes" : "No") << endl;
	return 0;
}
