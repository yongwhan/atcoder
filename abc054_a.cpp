#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	if(x==1) return 1000;
	return x;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int x=eval(a), y=eval(b);
	if(x>y) cout << "Alice" << endl;
	else if(x==y) cout << "Draw" << endl;
	else cout << "Bob" << endl;
	return 0;
}
