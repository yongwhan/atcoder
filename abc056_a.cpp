#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char a,b; cin>>a>>b;
	if(a=='D') {
		if(b=='D') b='H';
		else b='D';
	}
	cout << b << endl;
	return 0;
}
