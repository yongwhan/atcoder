#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,x; cin>>a>>b>>c>>x;
	int ret=0;
	for (int i=0; i<=a; i++) for (int j=0; j<=b; j++) for (int k=0; k<=c; k++)
		if(500*i+100*j+50*k==x)
			ret++;
	cout << ret << endl;
	return 0;
}
