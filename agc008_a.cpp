#include<bits/stdc++.h>
using namespace std;

int main() {
	int x,y; cin>>x>>y;
	cout << min(abs(x+y)+1, abs(x-y)+(x<y ? 0 : 2)) << endl;
	return 0;
}
