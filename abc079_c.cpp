#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=3;
	for (int i=0; i<(1<<n); i++) {
		int cur=s[0]-'0';
		string ret; ret+=s[0];
		for (int j=0; j<n; j++) {
			if(i&(1<<j)) cur+=s[j+1]-'0', ret+='+';
			else cur-=s[j+1]-'0', ret+='-';
			ret+=s[j+1];
		}
		ret+="=7";
		if(cur==7) {
			cout<<ret<<"\n";
			return 0;
		}
	}
	return 0;
}
