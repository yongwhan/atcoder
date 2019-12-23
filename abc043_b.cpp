#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	stack<char> stk;
	char ch;
	while(cin>>ch) {
		if(ch=='B') {
			if(!stk.empty()) stk.pop();
		} else stk.push(ch);
	}
	string ret;
	while(!stk.empty()) ret+=stk.top(), stk.pop();
	reverse(ret.begin(), ret.end());
	cout << ret << endl;
	return 0;
}
