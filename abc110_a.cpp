#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> x(3);
	for (int i=0; i<3; i++) cin>>x[i];
	sort(x.begin(), x.end(), greater<int>());
	cout << x[0]*10 + x[1] + x[2] << endl;
	return 0;
}
