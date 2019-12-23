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
	sort(a.rbegin(),a.rend());
	cout<<(sum-a.front()>a.front()?"Yes":"No")<<"\n";
	return 0;
}
