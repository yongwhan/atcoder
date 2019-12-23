#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<queue<int>> v(3);
	string s;
	for (int i=0; i<3; i++) {
		cin>>s;
		for (char ch : s)
			v[i].push(ch-'a');
	}
	int cur=0;
	while(1) {
		if(v[cur].empty()) { cout << char('A'+cur) << endl; return 0; }
		int nxt=v[cur].front();
		v[cur].pop();
		cur=nxt;
	}
	return 0;
}
