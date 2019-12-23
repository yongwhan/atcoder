#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

vector<vector<ii>> adj;
vector<ll> dist;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	adj.resize(n);
	dist.resize(n,-1);
	for (int i=0; i<n-1; i++) {
		int u,v,w; cin>>u>>v>>w; u--; v--;
		adj[u].push_back({v,w%2});
		adj[v].push_back({u,w%2});
	}
	queue<int> q; q.push(0); dist[0]=0;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (ii nxt : adj[cur]) {
			if(dist[nxt.first]!=-1) continue;
			dist[nxt.first]=(dist[cur]+nxt.second)%2;
			q.push(nxt.first);
		}
	}
	for (int i=0; i<n; i++)
		cout<<dist[i]<<"\n";
	return 0;
}
