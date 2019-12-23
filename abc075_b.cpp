#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++) {
		cin>>grid[i];
		for (int j=0; j<m; j++)
			if(grid[i][j]=='.')
				grid[i][j]='0';
	}

	for (int i=0; i<n; i++) for (int j=0; j<m; j++) if(grid[i][j]=='#') {
		for (int dx=-1; dx<=1; dx++) for (int dy=-1; dy<=1; dy++) if(abs(dx)+abs(dy)) {
			int ii=i+dx, jj=j+dy;
			if(0<=ii&&ii<n&&0<=jj&&jj<m && grid[ii][jj]!='#')
				grid[ii][jj]++;
		}
	}

	for (int i=0; i<n; i++)
		cout << grid[i] << endl;
	return 0;
}
