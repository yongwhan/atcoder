#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	n%=30;
	string ret="123456";
	for (int i=0; i<6; i++)
		for (int j=0; j<5; j++) {
			if(!n) break;
			swap(ret[j],ret[j+1]);
			n--;
		}
	cout<<ret<<"\n";
	return 0;
}
