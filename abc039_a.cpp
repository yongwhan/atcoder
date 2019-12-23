#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c; cin>>a>>b>>c;
	cout << 2*(a*b+b*c+c*a) << endl;
	return 0;
}
