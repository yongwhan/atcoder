#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,ret=0;
	while(cin>>x) ret^=x;
	cout << ret << endl;
	return 0;
}
