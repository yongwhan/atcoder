#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	priority_queue<int> pq;
	int a;
	while(n-->0)
		cin>>a, pq.push(a);
	while(!pq.empty() && m>0) {
		int cur=pq.top(); pq.pop();
		pq.push(cur/2);
		m--;
	}

	ll ret=0;
	while(!pq.empty())
		ret+=pq.top(), pq.pop();
	cout<<ret<<"\n";
	return 0;
}
