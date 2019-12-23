#include<bits/stdc++.h>
using namespace std;

const int mx=500*500+777;

int a[mx], b[mx], c[mx], d[mx];

int main() {
	int h,w; cin>>h>>w;
	int x[h+1][w+1];
	for (int i=1; i<=h; i++)
		for (int j=1; j<=w; j++)
			cin>>x[i][j];
	int k=0;
	for (int i=1; i<=h; i++) {
		for (int j=1; j<=w; j++) {
			if (x[i][j]%2==0)
				continue;
			if (j!=w)
				x[i][j+1]++, a[k]=i, b[k]=j, c[k]=i, d[k]=j+1, k++;
			else if(i!=h)
				x[i+1][j]++, a[k]=i, b[k]=j, c[k]=i+1, d[k]=j, k++;
		}
	}
	cout<<k<<"\n";
	for (int i=0; i<k; i++)
		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<"\n";
	return 0;
}
