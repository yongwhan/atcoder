#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		int a; cin>>a;
		for (int j=-1; j<=1; j++)
			ct[a+j]++;
	}
	int ret=0;
	for (const auto &it : ct)
		ret=max(ret,it.second);
	cout<<ret<<"\n";
	return 0;
}
