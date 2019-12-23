#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=101;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> x(n), y(n), h(n);
	for (int i=0; i<n; i++)
		cin>>x[i]>>y[i]>>h[i];
	for (int xc=0; xc<mx; xc++)
		for (int yc=0; yc<mx; yc++) {
			int hc=-1;
			for (int i=0; i<n; i++)
				if(h[i]) {
					hc=h[i]+abs(xc-x[i])+abs(yc-y[i]);
					break;
				}
			bool ok=true;
			for (int i=0; i<n; i++)
				if(max(hc-abs(x[i]-xc)-abs(y[i]-yc), 0)!=h[i])
					ok=false;
			if(ok) {
				cout << xc << " " << yc << " " << hc << endl;
				return 0;
			}
		}	
	return 0;
}
