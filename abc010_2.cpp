#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,ret=0;
	cin>>n;
	while(n--) {
		cin>>a;
		while(a%2==0||a%3==2)
			a--, ret++;
	}
	cout << ret << endl;
	return 0;
}
