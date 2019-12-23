#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	while(n>=0) {
		if(n%7==0) {
			cout << "Yes" << endl;
			return 0;
		}
		n-=4;
	}
	cout << "No" << endl;
	return 0;
}
