#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int h=n/3600; n%=3600;
	int m=n/60; n%=60;
	int s=n;
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}
