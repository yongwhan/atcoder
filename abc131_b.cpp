#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n>>a;
	int l=a, r=a+n-1;
	int eat=0;
	if(r<=0) eat=r;
	else if(l>=0) eat=l;
	cout<<(r+l)*(r-l+1)/2-eat<<"\n";
	return 0;
}
