#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int x=a+b;
	if(x%2) cout<<"IMPOSSIBLE\n";
	else cout<<x/2<<"\n";
	return 0;
}
