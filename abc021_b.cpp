#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	int a,b; cin>>a>>b;
	set<int> st={a,b};
	int k,x; cin>>k;
	for (int i=0; i<k; i++)
		cin>>x, st.insert(x);
	cout << (st.size()==k+2 ? "YES" : "NO") << endl;
	return 0;
}
