#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,bool> ct;
	ct[0]=true;
	int n,s; cin>>n;
	while(n-->0) {
		cin>>s;
		for (auto rit=ct.rbegin(); rit!=ct.rend(); rit++)
			ct[(*rit).first+s]=true;
	}
	int ret=0;
	for (auto it : ct)
		if(it.first%10)
			ret=max(ret,it.first);
	cout<<ret<<"\n";
	return 0;
}
