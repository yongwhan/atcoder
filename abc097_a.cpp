#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	cout << ((abs(a-c)<=d||(abs(a-b)<=d&&abs(b-c)<=d)) ? "Yes" : "No") << endl;
	return 0;
}
