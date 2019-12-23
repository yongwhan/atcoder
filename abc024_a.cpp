#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,k,s,t; cin>>a>>b>>c>>k>>s>>t;
	int ret=a*s+b*t;
	if(s+t>=k) ret-=c*(s+t);
	cout << ret << endl;
	return 0;
}
