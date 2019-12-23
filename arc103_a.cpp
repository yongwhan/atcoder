#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	vector<map<int,int>> ct(2);
	for (int i=0; i<n; i++)
		cin>>x,
		ct[i%2][x]++;
	vector<priority_queue<ii>> pq(2);
	for (int i=0; i<2; i++)
		for (auto it : ct[i])
			pq[i].push({it.second, it.first});
	vector<vector<ii>> a(2);
	for (int i=0; i<2; i++) {
		while(!pq[i].empty())
			a[i].push_back(pq[i].top()), pq[i].pop();
		a[i].push_back({0, -1});
	}

	if(a[0][0].second!=a[1][0].second)
		cout << n-a[0][0].first-a[1][0].first << endl;
	else
		cout << n-max(a[0][0].first+a[1][1].first, a[0][1].first+a[1][0].first) << endl;
	return 0;
}
