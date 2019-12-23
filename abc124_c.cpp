#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=INT_MAX;
	for (int i=0; i<2; i++) {
		int cur=0;
		for (int j=0; j<n; j++)
			if(s[j]-'0'!=(i+j)%2)
				cur++;
		ret=min(ret,cur);
	}
	cout<<ret<<"\n";
	return 0;
}
