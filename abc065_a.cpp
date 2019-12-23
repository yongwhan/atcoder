#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,a,b; cin>>x>>a>>b;
	if(b<=a) cout << "delicious" << endl;
	else if(b<=a+x) cout << "safe" << endl;
	else cout << "dangerous" << endl;
	return 0;
}
