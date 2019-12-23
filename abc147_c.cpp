#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<ii>> test(n);
	for (int i=0; i<n; i++) {
		int a; cin>>a;
		for (int j=0; j<a; j++) {
			int x,y; cin>>x>>y; x--;
			test[i].push_back({x,y});
		}
	}

	int ret=-1;
	for (int bt=0; bt<(1<<n); bt++) {
		bool ok=true;
		int cur=0;
		vector<int> col(n,-1);
		for (int i=0; i<n; i++) {
			if(bt&(1<<i)) {
				cur++;
				if(col[i]==-1) col[i]=1;
				else {
					if(col[i]!=1) {
						ok=false;
						break;
					}
				}
				for (auto it : test[i]) {
					if(col[it.first]==-1) col[it.first]=it.second;
					else {
						if(col[it.first]!=it.second) {
							ok=false;
							break;
						}
					}
				}
			}
		}
		queue<int> q;
		for (int i=0; i<n; i++)
			if(col[i]==1)
				q.push(i);
		while(!q.empty()) {
			int cur=q.front(); q.pop();
			for (auto it : test[cur]) {
				if(col[it.first]==-1) {
					col[it.first]=it.second;
					q.push(it.first);
				} else {
					if(col[it.first]!=it.second) {
						ok=false;
						break;
					}
				}
			}
		}

		if(ok)
			ret=max(ret,cur);
	}
	cout<<ret<<"\n";
	return 0;
}
