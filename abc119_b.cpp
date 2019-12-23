#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	double x; string u;
	map<string,double> ct;
	for (int i=0; i<n; i++)
		cin>>x>>u, ct[u]+=x;
	cout<<setprecision(10)<<fixed<<ct["JPY"]+ct["BTC"]*380000<<"\n";
	return 0;
}
