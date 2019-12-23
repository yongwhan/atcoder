#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d; d=d*2+1;
	cout<<(n+d-1)/d<<"\n";
	return 0;
}
