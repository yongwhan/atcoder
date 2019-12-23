#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(int x) {
	set<int> st;
	while(x)
		st.insert(x%10), x/=10;
	return st.size()==3;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int lst[]={3,5,7};
	queue<ll> q; q.push(0);
	int n,ret=0; cin>>n;
	for (int i=0; i<11; i++) {
		int sz=q.size();
		for (int j=0; j<sz; j++) {
			ll cur=q.front(); q.pop();
			if(cur&&cur<=n&&ok(cur))
				ret++;
			for (int k=0; k<3; k++)
				q.push(cur*10+lst[k]);
		}
	}
	cout << ret << endl;
	return 0;
}
