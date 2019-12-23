#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	long double xa,ya,xb,yb,xc,yc; cin>>xa>>ya>>xb>>yb>>xc>>yc;
	xb-=xa; yb-=ya;
	xc-=xa; yc-=ya;
	cout<<setprecision(10)<<fixed<<abs(xb*yc-xc*yb)/2.<<"\n";
	return 0;
}
