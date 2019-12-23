#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,a; cin>>n>>k;
	map<int,int> ct;
	priority_queue<int> pq;
	while(n--)
		cin>>a, ct[a]++;
	for (auto it : ct)
		pq.push(it.second);
	while(!pq.empty() && k--)
		pq.pop();
	int ret=0;
	while(!pq.empty())
		ret+=pq.top(), pq.pop();
	cout << ret << endl;
	return 0;
}
