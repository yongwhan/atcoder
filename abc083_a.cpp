#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	int x=a+b, y=c+d;
	if(x>y) cout << "Left" << endl;
	else if(x<y) cout << "Right" << endl;
	else cout << "Balanced" << endl;
	return 0;
}
