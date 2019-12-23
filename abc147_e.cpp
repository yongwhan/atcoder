#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int mx2=80, mx=80*80*2*2, offset=mx/2;
bool dp[mx2][mx2][mx];

int main() {
	int h,w; scanf("%d %d",&h,&w);
	int a[h][w], b[h][w];
	for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			scanf("%d",&a[i][j]);
	for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			scanf("%d",&b[i][j]);
	int init=a[0][0]-b[0][0];
	dp[0][0][init+offset]=true;
	dp[0][0][-init+offset]=true;
	for (int i=1; i<h; i++) {
		int cur=a[i][0]-b[i][0];
		for (int j=0; j<mx; j++)
			if(dp[i-1][0][j])
				dp[i][0][j+cur]=true, dp[i][0][j-cur]=true;
	}
	for (int i=1; i<w; i++) {
		int cur=a[0][i]-b[0][i];
		for (int j=0; j<mx; j++)
			if(dp[0][i-1][j])
				dp[0][i][j+cur]=true, dp[0][i][j-cur]=true;
	}
	for (int i=1; i<h; i++) {
		for (int j=1; j<w; j++) {
			int cur=a[i][j]-b[i][j];
			for (int k=0; k<mx; k++) {
				if(dp[i-1][j][k])
					dp[i][j][k+cur]=true, dp[i][j][k-cur]=true;
				if(dp[i][j-1][k])
					dp[i][j][k+cur]=true, dp[i][j][k-cur]=true;
			}
		}
	}
	int ret=INT_MAX;
	for (int i=0; i<mx; i++)
		if(dp[h-1][w-1][i])
			ret=min(ret,abs(i-offset));
	printf("%d\n",ret);
	return 0;
}
