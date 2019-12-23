#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int sum=0;
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i];
	int x=0, ret=0;
	for (int i=0; i<n; i++) {
		x+=a[i]-sum/n;
		if(x) ret++;
	}
	cout << (sum%n ? -1 : ret) << endl;
	return 0;
}
