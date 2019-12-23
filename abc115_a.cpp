#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string base="Christmas";
	int d; cin>>d;
	for (int i=0; i<25-d; i++)
		base+=" Eve";
	cout << base << endl;
	return 0;
}
