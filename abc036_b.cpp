#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<string> g(n);
	for (int i=0; i<n; i++)
		cin>>g[i];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			cout << g[n-j-1][i];
		cout << endl;
	}
	return 0;
}
