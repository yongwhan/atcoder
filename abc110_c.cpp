#include <bits/stdc++.h>
using namespace std;

void calc(string& s) {
	map<char, char> to;
	char t='a';
	for (auto& c : s)
		to.count(c) ? c=to[c] : c=to[c]=t++;
}

int main() {
	string s,t; cin>>s>>t;
	calc(s); calc(t);
	cout<<(s==t?"Yes":"No")<<"\n";
	return 0;
}
