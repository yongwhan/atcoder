#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c; cin>>a>>b>>c;
	int m=max({a,b,c});
	int x=m+1;
	if((3*m-(a+b+c))%2==0)
		x=m;
	cout<<(3*x-(a+b+c))/2<<"\n";
	return 0;
}
