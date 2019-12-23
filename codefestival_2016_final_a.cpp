#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	for (int i=0; i<a; i++)
		for (int j=0; j<b; j++) {
			string s; cin>>s;
			if(s=="snuke") {
				cout<<char('A'+j)<<i+1<<"\n";
				return 0;
			}
		}
	return 0;
}
