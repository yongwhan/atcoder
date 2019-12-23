#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	if(x==1) return 300000;
	if(x==2) return 200000;
	if(x==3) return 100000;
	return 0;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,y; cin>>x>>y;
	cout<<eval(x)+eval(y)+int(x==1&&y==1)*400000<<"\n";
	return 0;
}
