#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,int> idx;
	set<int> st;
	int x;
	for (int i=0; i<3; i++) {
		cin>>x;
		idx[x]=i;
		st.insert(x);
	}

	map<int,int> ret;
	int rank=0;
	for (auto it=st.rbegin(); it!=st.rend(); it++)
		ret[idx[*it]]=++rank;
	for (auto it : ret)
		cout << it.second << endl;
	return 0;
}
