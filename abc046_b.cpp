#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int ret=k; n--; k--;
	for (int i=0; i<n; i++)
		ret*=k;
	cout << ret << endl;
	return 0;
}
