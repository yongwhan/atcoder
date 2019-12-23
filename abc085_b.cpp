#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	set<int> st;
	for (int i=0; i<n; i++)
		cin>>x, st.insert(x);
	cout << st.size() << endl;
	return 0;
}
