#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	map<char,int> ct;
	for (auto ch : s)
		ct[ch]++;
	for (char ch='A'; ch<='F'; ch++) {
		if(ch!='A') cout << " ";
		cout << ct[ch];
	}
	cout << endl;
	return 0;
}
