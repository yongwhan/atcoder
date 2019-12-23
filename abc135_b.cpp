#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,mis=0,x; cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>x;
		if(i!=x) mis++;
	}
	cout<<(mis==2||mis==0?"YES":"NO")<<"\n";
	return 0;
}
