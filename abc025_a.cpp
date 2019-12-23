#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; int n; cin>>s>>n;
	for (auto a : s)
		for (auto b : s) {
			n--;
			if(n==0) cout << string(1,a)+b << endl;
		}	
	return 0;
}
