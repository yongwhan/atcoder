#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	char ch;
	set<char> st;
	for (int i=0; i<n; i++) {
		cin>>ch;
		st.insert(ch);
	}
	cout << (st.size()==3 ? "Three" : "Four") << endl;
	return 0;
}
