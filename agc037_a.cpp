#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	stack<string> stk;
	string cur;
	for (const char &ch : s) {
		if(cur.empty()) cur+=ch;
		else {
			if(!stk.empty()&&cur==stk.top()) cur+=ch;
		}
		if(!cur.empty()&&(stk.empty()||(!stk.empty()&&cur!=stk.top()))) {
			stk.push(cur);
			cur.clear();
		}
	}
	cout<<stk.size()<<"\n";
	return 0;
}
