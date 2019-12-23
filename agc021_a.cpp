#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string n; cin>>n;
	if(n.size()==1) {
		cout << n << endl;
		return 0;
	}
	int ret=9*(n.size()-1) + (n[0]-'0'-1);
	set<char> st;
	for (int i=1; i<n.size(); i++)
		st.insert(n[i]);
	if(st.size()==1&&st.find('9')!=st.end())
		ret++;
	cout << ret << endl;
	return 0;
}
