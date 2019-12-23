#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string fmt(int x, int len) {
	stringstream ss; ss<<x;
	string ret=ss.str();
	while(ret.size()<len)
		ret='0'+ret;
	return ret;
}

string eval(int x, int y) {
	return fmt(x,6)+fmt(y,6);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<int, ii> mp;
	map<int, set<int>> order;
	for (int i=0; i<m; i++) {
		int p,y; cin>>p>>y;
		ii cur={p,y};
		mp[i]=cur;
		order[p].insert(y);
	}
	map<ii, string> id;
	for (auto it : order) {
		int ord=0;
		for (auto it2 : it.second)
			id[{it.first, it2}]=eval(it.first, ++ord);
	}
	for (auto it : mp)
		cout << id[it.second] << endl;
	return 0;
}
