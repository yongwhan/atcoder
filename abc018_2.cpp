#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n,l,r; cin>>n;
	for (int i=0; i<n; i++)
		cin>>l>>r,
		reverse(s.begin()+l-1, s.begin()+r);
	cout << s << endl;
	return 0;
}
