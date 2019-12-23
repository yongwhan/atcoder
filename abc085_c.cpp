#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,y; cin>>n>>y;
	for (int i=0; 10000*i<=y; i++) {
		for (int j=0; 10000*i+5000*j<=y; j++) {
			int k=(y-10000*i-5000*j)/1000;
			if(i+j+k==n) {
				cout<<i<<" "<<j<<" "<<k<<"\n";
				return 0;
			}
		}
	}
	cout<<"-1 -1 -1\n";
	return 0;
}
