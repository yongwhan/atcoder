#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int lbd[9]={1,400,800,1200,1600,2000,2400,2800,3200};

int eval(int x) {
	for (int i=8; i>=0; i--)
		if(x>=lbd[i])
			return i;
	return -1;
}

int getmin(int x, int y) {
	if(!x) {
		if(!y) return 0;
		else return 1;
	} else return x;
}

int getmax(int x, int y) {
	return x+y;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		int x; cin>>x; 
		ct[eval(x)]++;
	}
	int cur=0, add=0;
	for (int i=0; i<8; i++)
		if(ct[i])
			cur++;
	add=ct[8];
	cout<<getmin(cur,add)<<" "<<getmax(cur,add)<<"\n";
	return 0;
}
