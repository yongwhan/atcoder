#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool eval(string s) {
	if(s.empty())
		return true;
	if(s[0]=='o'||s[0]=='k'||s[0]=='u')
		return eval(s.substr(1));
	if(s.size()<2)
		return false;
	if(s[0]=='c'&&s[1]=='h')
		return eval(s.substr(2));
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	cout << (eval(s) ? "YES" : "NO") << endl;
	return 0;
}
