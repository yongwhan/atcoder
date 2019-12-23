#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	double ret=0,a;
	for (int i=0; i<n; i++)
		cin>>a, ret+=1/a;
	cout<<setprecision(10)<<fixed<<1/ret<<"\n";
	return 0;
}
