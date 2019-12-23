#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int P,Q,R; cin>>P>>Q>>R; cout<<P+Q+R-max({P,Q,R})<<"\n";
	return 0;
}
