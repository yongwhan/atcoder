#include<bits/stdc++.h>
using namespace std;
int main() {
	int ret=0;
	for (int i=0; i<12; i++) {
		string s; cin>>s;
		set<char> st(s.begin(), s.end());
		if(st.find('r')!=st.end())
			ret++;
	}
	cout << ret << endl;
	return 0;
}
