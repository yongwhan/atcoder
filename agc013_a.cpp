#include<bits/stdc++.h>
using namespace std;

int main() {
	int ret=1;
	int n,a,sgn=0; cin>>n>>a;
	for(int i=1; i<n; i++) {
		int b;
		cin>>b;
		if(b==a)
			continue;
		if(sgn) {
			if(sgn*(a-b)>0)
				sgn=0, ret++;
		} else sgn=b>a?1:-1;
		a=b;
	}
	cout << ret << endl;
	return 0;
}
