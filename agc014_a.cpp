#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0;
	int a,b,c; cin>>a>>b>>c;
	set<iii> st; st.insert({a,{b,c}});
	while(a%2==0&&b%2==0&&c%2==0) {
		int d=(b+c)/2, e=(c+a)/2, f=(a+b)/2;
		iii cur={d,{e,f}};
		if(st.find(cur)!=st.end()) {
			cout << -1 << endl;
			return 0;
		}
		st.insert(cur);
		ret++;
		a=d, b=e, c=f;
	}
	cout << ret << endl;
	return 0;
}
