#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	cout << (a%3==0||b%3==0||(a+b)%3==0 ? "Possible" : "Impossible") << endl;
	return 0;
}
