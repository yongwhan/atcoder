#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,l,cur=0,ret=1;
	cin>>n>>x;
	for (int i=0; i<n; i++) {
		cin>>l;
		cur+=l;
		if(cur<=x) ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
