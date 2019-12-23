#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> x(n), y(n);
	for (int i=0; i<n; i++)
		cin>>x[i]>>y[i];
	vector<int> p(n);
	for (int i=0; i<n; i++)
		p[i]=i;
	double ret=0, ct=0;
	do {
		double cur=0;
		for (int i=1; i<n; i++) {
			double dx=x[p[i]]-x[p[i-1]], dy=y[p[i]]-y[p[i-1]];
			cur+=sqrt(dx*dx+dy*dy);
		}
		ret+=cur; ct++;
	} while(next_permutation(p.begin(),p.end()));
	cout<<setprecision(10)<<fixed<<ret/ct<<"\n";
	return 0;
}
