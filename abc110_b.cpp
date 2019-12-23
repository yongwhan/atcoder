#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int N,M,X,Y,x,y,xmax=-inf, ymin=inf; cin>>N>>M>>X>>Y;
	for (int i=0; i<N; i++)
		cin>>x, xmax=max(xmax,x);
	for (int i=0; i<M; i++)
		cin>>y, ymin=min(ymin,y);
	for (int Z=X+1; Z<=Y; Z++)
		if(xmax<Z&&Z<=ymin) {
			cout << "No War" << endl;
			return 0;
		}
	cout << "War" << endl;
	return 0;
}
