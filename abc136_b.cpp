#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int i=1; i<=n; i++) {
		string cur=to_string(i);
		if(cur.size()%2)
			ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
