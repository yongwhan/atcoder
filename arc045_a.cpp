#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s;
	bool first=true;
	while(cin>>s) {
		if(!first) cout<<" ";
		if(s=="Left") cout<<"<";
		else if(s=="Right") cout<<">";
		else cout<<"A";
		first=false;
	}
	cout<<"\n";
	return 0;
}
