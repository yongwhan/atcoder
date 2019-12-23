#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(int x) {
	stringstream ss; ss<<x;
	string s=ss.str();
	set<char> st(s.begin(), s.end());
	return st.size()==1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	while(1) {
		if(ok(n)) {
			cout << n << endl;
			return 0;
		}
		n++;
	}
	return 0;
}
