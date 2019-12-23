#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int h,w,k; cin>>h>>w>>k;
	vector<string> g(h);
	vector<int> row;
	for (int i=0; i<h; i++) {
		cin>>g[i];
		bool has=false;
		for (int j=0; j<w; j++)
			if(g[i][j]=='#')
				has=true;
		if(has) row.push_back(i);
	}
	row.push_back(h);
	map<int,int> len;
	for (int i=0; i<row.size()-1; i++)
		len[row[i]]=row[i+1]-row[i];
	vector<vector<int>> ret(h,vector<int>(w,-1));
	int ct=1;
	for (int i=0; i<h; i++) {
		if(!len[i]) continue;
		vector<int> col;
		col.push_back(-1);
		for (int j=0; j<w; j++)
			if(g[i][j]=='#')
					col.push_back(j);
		col.back()=w-1;
		for (int j=0; j<col.size()-1; j++) {
			bool up=false;
			for (int u=col[j]+1; u<=col[j+1]; u++)
				for (int t=0; t<len[i]; t++)
					ret[i+t][u]=ct, up=true;
			if(up) ct++;
		}
	}
	
	for (int j=0; j<w; j++)
		for (int i=h-1; i>=1; i--)
			if(ret[i-1][j]==-1)
				ret[i-1][j]=ret[i][j];

	for (int i=0; i<h; i++) {
		for (int j=0; j<w; j++) {
			cout<<ret[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
