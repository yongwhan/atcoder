#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int dp[2][n], val[2][n];
	for (int i=0; i<2; i++)
		for (int j=0; j<n; j++)
			cin>>val[i][j];
	dp[0][0]=val[0][0];
	for (int i=1; i<2; i++)
		dp[i][0]=dp[i-1][0]+val[i][0];
	for (int j=1; j<n; j++)
		dp[0][j]=dp[0][j-1]+val[0][j];
	for (int i=1; i<2; i++)
		for (int j=1; j<n; j++)
			dp[i][j]=max(dp[i-1][j],dp[i][j-1])+val[i][j];
	cout<<dp[1][n-1]<<"\n";
	return 0;
}
