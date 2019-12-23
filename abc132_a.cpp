#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	map<char,int> ct;
	for (const char &ch : s)
		ct[ch]++;
	map<int,int> ret;
	for (const auto &it : ct)
		ret[it.second]++;
	cout<<(ret[2]==2?"Yes":"No")<<"\n";
	return 0;
}
