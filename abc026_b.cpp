#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> r(n);
	for (int i=0; i<n; i++) cin>>r[i];
	sort(r.rbegin(), r.rend());
	int ret=0, sgn=1;
	for (int i=0; i<n; i++)
		ret+=r[i]*r[i]*sgn, sgn=-sgn;
	cout << setprecision(10) << fixed << ret * 2*acos(0) << endl;
	return 0;
}
