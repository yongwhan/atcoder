#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int t; cin>>t;
	int x=0, y=0, q=0;
	for (auto ch : s)
		if(ch=='L') x++;
		else if(ch=='R') x--;
		else if(ch=='U') y++;
		else if(ch=='D') y--;
		else q++;
	int d=abs(x)+abs(y);
	if(t==1) cout << d+q << endl;
	else {
		if(q>d) cout << ((d+q)%2) << endl;
		else cout << d-q << endl;
	}
	return 0;
}
