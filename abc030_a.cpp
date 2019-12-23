#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	int x=a*d, y=b*c;
	if(x<y) cout << "TAKAHASHI" << endl;
	else if(x>y) cout << "AOKI" << endl;
	else cout << "DRAW" << endl;
	return 0;
}
