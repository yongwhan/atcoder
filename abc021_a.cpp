#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> ret;
	for (int i=0; i<5; i++)
		if(n&(1<<i))
			ret.push_back(1<<i);
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << endl;
	return 0;
}
