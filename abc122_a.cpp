#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<char,char> mp={{'A','T'},{'T','A'},{'C','G'},{'G','C'}};
	char ch; cin>>ch; cout<<mp[ch]<<"\n";
	return 0;
}
