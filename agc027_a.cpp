#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x; cin>>n>>x;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	int ret=0;
	for (int i=0; i<n-1; i++)
		if(x>=a[i])
			x-=a[i], ret++;
	if(x==a[n-1])
		ret++;
	cout << ret << endl;
	return 0;
}
