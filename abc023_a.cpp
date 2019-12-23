#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,ret=0; cin>>x;
	while(x)
		ret+=x%10, x/=10;
	cout << ret << endl;
	return 0;
}
