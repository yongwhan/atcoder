#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int N,X; cin>>N>>X;
	vector<int> x(N+1);
	for (int i=0; i<N; i++)
		cin>>x[i];
	x[N]=X;
	sort(x.begin(),x.end());
	int ret=x[1]-x[0];
	for (int i=0; i<N; i++)
		ret=__gcd(ret,x[i+1]-x[i]);
	cout<<ret<<"\n";
	return 0;
}
