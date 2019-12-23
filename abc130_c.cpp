#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int w,h,x,y; cin>>w>>h>>x>>y;
	cout<<double(w)*h/2<<" "<<(x+x==w&&y+y==h)<<"\n";
	return 0;
}
