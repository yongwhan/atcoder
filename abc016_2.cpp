#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c; cin>>a>>b>>c;
	bool f=(a+b==c), g=(a-b==c);
	if(f&&g) cout << "?" << endl;
	else if(f) cout << "+" << endl;
	else if(g) cout << "-" << endl;
	else cout << "!" << endl;
	return 0;
}
