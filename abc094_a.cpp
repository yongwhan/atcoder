#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,x; cin>>a>>b>>x;
	cout << (a<=x&&a+b>=x ? "YES" : "NO") << endl;
	return 0;
}
