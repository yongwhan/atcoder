#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	int sz=s.size();
	for (int i=0; i<sz; i++)
		s[i]='A'+((s[i]-'A')+n)%26;
	cout<<s<<"\n";
	return 0;
}
