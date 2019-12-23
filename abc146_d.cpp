#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+777;
vector<vector<ii>> adj(mx);
vector<int> col(mx,-1), deg(mx,0);
int n;

void doit(int cur, int par, int used) {
	int it=0;
	for (auto nxt : adj[cur]) {
		if(nxt.first==par) continue;
		if(it==used) it++;
		col[nxt.second]=it;
		doit(nxt.first,cur,it);
		it++;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n-1; i++) {
		int a,b; cin>>a>>b; a--; b--;
		adj[a].push_back({b,i});
		adj[b].push_back({a,i});
		deg[a]++; deg[b]++;
	}
	
	int mx=*max_element(deg.begin(),deg.end());
	doit(0,-1,-1);
	cout<<mx<<"\n";
	for (int i=0; i<n-1; i++)
		cout<<col[i]+1<<"\n";
	return 0;
}
