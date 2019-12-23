#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> a(3);
	for (int i=0; i<3; i++) cin>>a[i];
	sort(a.begin(), a.end());
	cout << (a[2]==a[1]+a[0] ? "Yes" : "No") << endl;
	return 0;
}
