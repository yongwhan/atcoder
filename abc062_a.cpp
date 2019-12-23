#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> gp({-1,1,3,1,2,1,2,1,1,2,1,2,1});
	int x,y; cin>>x>>y;
	cout << (gp[x]==gp[y] ? "Yes" : "No") << endl;
	return 0;
}
