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
	vector<int> v={ct['a'],ct['b'],ct['c']};
	sort(v.begin(),v.end());
	cout<<(v.back()-v.front()<=1?"YES":"NO")<<"\n";
	return 0;
}
