#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0,x;
	for (int i=0; i<2; i++) {
		cin>>x;
		if(x%2)
			ret++;
	}
	cout << (ret==2 ? "Yes" : "No") << endl;
	return 0;
}
