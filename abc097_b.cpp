#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x; cin>>x;
	int ret=1;
	for (int b=2; b<=1000; b++) {
		int t=b*b, p=0;
		while(1) {
			if(t>x) break;
			ret=max(ret,t);
			t*=b;
		}
	}
	cout << ret << endl;
	return 0;
}
