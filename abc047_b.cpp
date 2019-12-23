#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int w,h,n; cin>>w>>h>>n;
	vector<vector<bool>> white(w, vector<bool>(h,true));
	int x,y,a, ret=w*h;
	for (int i=0; i<n; i++) {
		cin>>x>>y>>a;
		int xmin=0, xmax=w, ymin=0, ymax=h;
		switch(a) {
			case 1: xmax=x; break;
			case 2: xmin=x; break;
			case 3: ymax=y; break;
			default: ymin=y;
		}
		for (int x=xmin; x<xmax; x++)
			for (int y=ymin; y<ymax; y++)
				if(white[x][y])
					white[x][y]=false, ret--;
	}
	cout << ret << endl;
	return 0;
}
