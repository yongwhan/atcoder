#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	set<int> st;
	while(n-->0) {
		cin>>a;
		if(st.count(a)) st.erase(a);
		else st.insert(a);
	}
	cout<<st.size()<<"\n";
	return 0;
}
