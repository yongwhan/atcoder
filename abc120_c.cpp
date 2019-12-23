#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=0;
	stack<char> stk;
	for (const char &ch : s)
		if(stk.empty()) stk.push(ch);
		else {
			if(stk.top()==ch) stk.push(ch);
			else stk.pop(), ret+=2;
		}
	cout<<ret<<"\n";
	return 0;
}
