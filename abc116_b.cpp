#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int s; cin>>s;
	set<int> st;
	int cur=1;
	while(!st.count(s)) {
		st.insert(s);
		cur++;
		if(s%2) s=3*s+1;
		else s/=2;
	}
	cout<<cur<<"\n";
	return 0;
}
