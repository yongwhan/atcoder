#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<char,char> mp={{'O', '0'}, {'D', '0'}, {'I', '1'}, {'Z', '2'}, {'S', '5'}, {'B', '8'}};
	string s; cin>>s;
	for (char ch : s)
		cout<<(mp.count(ch) ? mp[ch] : ch);
	cout<<"\n";
	return 0;
}
