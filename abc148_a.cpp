#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<int> st={1,2,3};
	int a;
	for (int i=0; i<2; i++)
		cin>>a, st.erase(a);
	cout<<*st.begin()<<"\n";
	return 0;
}
