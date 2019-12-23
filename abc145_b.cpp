#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	if(n%2) {
		cout<<"No\n";
		return 0;
	}
	string t=s.substr(0,n/2);
	cout<<(s==t+t?"Yes":"No")<<"\n";
	return 0;
}
