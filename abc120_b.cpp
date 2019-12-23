#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,k; cin>>a>>b>>k;
	for (int d=min(a,b); d>=1; d--) {
		if(a%d==0&&b%d==0) {
			k--;
			if(!k) {
				cout<<d<<"\n";
				return 0;
			}
		}
	}
	return 0;
}
