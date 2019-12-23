#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,y,k; cin>>x>>y>>k; cout<<x+y-abs(k-y)<<"\n";
	return 0;
}
