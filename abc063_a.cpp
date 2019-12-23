#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int x=a+b;
	if(x>=10) cout << "error" << endl;
	else cout << x << endl;
	return 0;
}
