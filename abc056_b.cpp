#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int W,a,b; cin>>W>>a>>b;
	int diff=a-b;
	if(a+W<b) cout << b-a-W << endl;
	else if(b+W<a) cout << a-b-W << endl;
	else cout << 0 << endl;
	return 0;
}
