#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char x,y; cin>>x>>y;
	if(x==y) {
		cout << '=' << endl;
		return 0;
	}
	cout << (x>y ? '>' : '<') << endl;
	return 0;
}
