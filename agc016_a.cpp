#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	int ret=1e9;
	for (char x='a'; x<='z'; x++) {
		int cur=0, mx=0;
		for (auto y : s) {
			if(y==x) cur=0;
			else cur++, mx=max(mx,cur);
		}
		ret=min(ret,mx);
	}
	cout << ret << endl;
	return 0;
}
