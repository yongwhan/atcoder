#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b;
	map<int,int> ct;
	for (int i=0; i<2; i++) {
		cin>>a>>b;
		for (int j=a; j<b; j++)
			ct[j]++;
	}
	int ret=0;
	for (auto it : ct)
		if(it.second==2)
			ret++;
	cout << ret << endl;
	return 0;
}
