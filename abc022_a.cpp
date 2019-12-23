#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,y,cur=0,t,ret=0; cin>>n>>x>>y;
	for (int i=0; i<n; i++) {
		cin>>t;
		cur+=t;
		if(x<=cur&&cur<=y)
			ret++;
	}
	cout << ret << endl;
	return 0;
}
