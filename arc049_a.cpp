#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	vector<int> a(4);
	for (int i=0; i<4; i++)
		cin>>a[3-i];
	for (int i=0; i<4; i++)
		s=s.substr(0,a[i])+"\""+s.substr(a[i]);
	cout<<s<<"\n";
	return 0;
}