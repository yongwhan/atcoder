#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	string s;
	string x=string(m+2,'#');
	cout << x << endl;
	for (int i=0; i<n; i++)
		cin>>s, cout << "#" << s << "#" << endl;
	cout << x << endl;
	return 0;
}
