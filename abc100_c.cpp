#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	int ret=0;
	while(1) {
		if(x%2) return ret;
		x/=2; ret++;
	}
	return -1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0, n, a; cin>>n;
	for (int i=0; i<n; i++)
		cin>>a, ret+=eval(a);
	cout << ret << endl;
	return 0;
}
