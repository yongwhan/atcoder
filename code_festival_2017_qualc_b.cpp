#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=1,sub=1; cin>>n;
	for (int i=0; i<n; i++) {
		int a; cin>>a;
		ret*=3;
		if(a%2==0) sub*=2;
	}
	cout<<ret-sub<<"\n";
	return 0;
}
