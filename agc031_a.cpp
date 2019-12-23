#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	map<char,ll> ct;
	for (const char &ch : s)
		ct[ch]++;
	ll ret=1;
	for (const auto &it : ct)
		ret=(ret*(it.second+1))%mod;
	ret--;
	cout<<ret<<"\n";
	return 0;
}
