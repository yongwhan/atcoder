#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> v(3);
	for (int i=0; i<3; i++) cin>>v[i];
	sort(v.begin(), v.end());
	vector<int> w={5,5,7};
	cout << (v==w ? "YES" : "NO") << endl;
	return 0;
}
