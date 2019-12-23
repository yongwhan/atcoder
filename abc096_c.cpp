#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> g(n);
	for (int i=0; i<n; i++)
		cin>>g[i];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if(g[i][j]!='#') continue;
			bool ok=false;
			for (int k=0; k<4; k++) {
				int ii=i+dx[k], jj=j+dy[k];
				if(ii<0||ii>=n||jj<0||jj>=m) continue;
				if(g[ii][jj]=='#')
					ok=true;
			}
			if(!ok) {
				cout<<"No\n";
				return 0;
			}
		}
	}
	cout<<"Yes\n";
	return 0;
}
