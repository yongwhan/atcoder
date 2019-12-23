#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int d=1; d<=n; d++)
		if(n%d==0)
			ret++;
	cout<<(ret==2 ? "YES":"NO")<<"\n";
	return 0;
}
