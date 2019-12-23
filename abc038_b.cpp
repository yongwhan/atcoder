#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	for (int i=0; i<2; i++) {
		if(a==c||b==d) { cout << "YES" << endl; return 0; }
		swap(c,d);
	}
	cout << "NO" << endl;
	return 0;
}
