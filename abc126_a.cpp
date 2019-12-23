#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k; string s; cin>>s; k--;
	s[k]=tolower(s[k]);
	cout<<s<<"\n";
	return 0;
}
