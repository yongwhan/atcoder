#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], a[i]--;
	int ret=0;
	for (int i=0; i<n; i++) {
		if(a[i]<i) continue;
		if(a[a[i]]==i) ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
