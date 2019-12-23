#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string w; cin>>w;
	map<char,int> ct;
	for (auto ch : w)
		ct[ch]++;
	for (auto it : ct)
		if(it.second%2) {
			cout << "No" << endl;
			return 0;
		}
	cout << "Yes" << endl;
	return 0;
}
