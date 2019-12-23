#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	multiset<int> mst;
	for (int i=0; i<n; i++)
		cin>>a[i], mst.insert(a[i]);
	for (int i=0; i<n; i++) {
		mst.erase(mst.find(a[i]));
		cout<<*mst.rbegin()<<"\n";
		mst.insert(a[i]);
	}
	return 0;
}
