#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	priority_queue<int> pq;
	int n,k,a; cin>>n>>k;
	while(n--) cin>>a, pq.push(a);
	int ret=0;
	while(k--) ret+=pq.top(), pq.pop();
	cout << ret << endl;
	return 0;
}
