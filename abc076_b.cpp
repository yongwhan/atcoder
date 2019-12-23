#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int cur=1;
	while(n--)
		cur=min(cur*2,cur+k);
	cout << cur << endl;
	return 0;
}
