#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;
const int mx=1077;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<bool> flag(mx,true);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;
	vector<int> pr;
	for (int i=2; i<mx; i++)
		if(flag[i])
			pr.push_back(i);

	map<int,int> ct;
	int n; cin>>n;
	for (int x=2; x<=n; x++) {
		int y=x;
		for (auto p : pr) {
			if(p>y||y==1) break;
			if(y%p==0) {
				while(1) {
					if(y%p) break;
					ct[p]++, y/=p;
				}
			}
		}
	}

	ll ret=1;
	for (auto it : ct)
		ret=(ret*(it.second+1))%mod;
	cout << ret << endl;
	return 0;
}
