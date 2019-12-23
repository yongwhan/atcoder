#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> a(3);
	for (int i=0; i<3; i++)
		cin>>a[i];
	ll ret=-1;
	sort(a.begin(), a.end());
	do {
		ll x=a[0]/2, y=a[0]-x;
		ll val=abs(x-y)*a[1]*a[2];
		if(ret==-1)
			ret=val;
		else
			ret=min(ret,val);
	} while(next_permutation(a.begin(),a.end()));
	cout << ret << endl;
	return 0;
}
