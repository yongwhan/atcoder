#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int X,t; cin>>X>>t;
	cout << max(0,X-t) << endl;
	return 0;
}
