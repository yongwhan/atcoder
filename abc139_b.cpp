#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int ret=0, out=1;
	while(out<b)
		out--, out+=a, ret++;
	cout<<ret<<"\n";
	return 0;
}
