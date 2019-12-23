#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.rbegin(),a.rend());
	int ret=0;
	for (int i=0; i<n; i++)
		if(i%2==0) ret+=a[i];
		else ret-=a[i];
	cout << ret << endl;
	return 0;
}
