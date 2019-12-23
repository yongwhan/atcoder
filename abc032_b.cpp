#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int k, n=s.size(); cin>>k;
	if(k>n) { cout << 0 << endl; return 0; }
	set<string> st;
	for (int i=0; i<=n-k; i++)
		st.insert(s.substr(i,k));
	cout << st.size() << endl;
	return 0;
}
