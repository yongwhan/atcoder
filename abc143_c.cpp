#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; string s; cin>>n>>s;
	stack<char> stk; stk.push(s[0]);
	for (char ch : s)
		if(stk.top()!=ch)
			stk.push(ch);
	cout<<stk.size()<<"\n";
	return 0;
}
