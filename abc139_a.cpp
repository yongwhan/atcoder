#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int ret=0;
	for (int i=0; i<3; i++)
		ret+=(s[i]==t[i]);
	cout<<ret<<"\n";
	return 0;
}
