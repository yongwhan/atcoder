#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0,a,b;
	while(cin>>a>>b)
		ret+=a*b/10;
	cout << ret << endl;
	return 0;
}
