#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<string> used;
	string prev,w;
	cin>>prev;
	used.insert(prev);
	for (int i=1; i<n; i++) {
		cin>>w;
		if(used.find(w)!=used.end()) {
			cout << "No" << endl;
			return 0;
		}
		used.insert(w);
		if(prev.back()!=w.front()) {
			cout << "No" << endl;
			return 0;
		}
		prev=w;
	}
	cout << "Yes" << endl;
	return 0;
}
