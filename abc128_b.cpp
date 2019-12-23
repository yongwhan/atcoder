#include<bits/stdc++.h>
using namespace std;

typedef tuple<string,int,int> tp;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<tp> a(n);
	for (int i=0; i<n; i++) {
		string s; int p; cin>>s>>p;
		a[i]=make_tuple(s,-p,i+1);
	}
	sort(a.begin(),a.end());
	for (int i=0; i<n; i++)
		cout<<get<2>(a[i])<<"\n";
	return 0;
}
