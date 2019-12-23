#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,k; cin>>a>>b>>k;
	set<int> st;
	for (int i=0; i<k; i++) {
		int x=a+i;
		if(x<=b)
			st.insert(x);
	}
	for (int i=0; i<k; i++) {
		int x=b-i;
		if(x>=a)
			st.insert(x);
	}
	for (auto it : st)
		cout << it << endl;
	return 0;
}
