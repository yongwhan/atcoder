#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(string &s) {
	stringstream ss(s);
	int ret; ss>>ret; return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=1000;
	for (int i=0; i<s.size()-2; i++) {
		string cur=s.substr(i,3);
		ret=min(ret,abs(eval(cur)-753));
	}
	cout << ret << endl;
	return 0;
}
