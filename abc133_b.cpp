#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool is(int x) {
	int rt=int(sqrt(x)+1e-6);
	return rt*rt==x;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	int a[n][d];
	for (int i=0; i<n; i++)
		for (int j=0; j<d; j++)
			cin>>a[i][j];
	int ret=0;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++) {
			int cur=0;
			for (int k=0; k<d; k++) {
				int d=a[i][k]-a[j][k];
				cur+=d*d;
			}
			if(is(cur)) ret++;
		}
	cout<<ret<<"\n";
	return 0;
}
