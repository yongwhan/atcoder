#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

bool eval(const string &s) {
	int n=s.size();
	for (int i=0; i<n/2; i++) {
		char a=s[i], b=s[n-1-i];
		if(a=='*'||b=='*') continue;
		if(a!=b) return false;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	cout<<(eval(s)?"YES":"NO")<<"\n";
	return 0;
}
