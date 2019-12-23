#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a,n4=0,n2=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a;
		if(a%4==0) n4++;
		else if(a%2==0) n2++;
	}
	cout<<(n/2<=n4+n2/2?"Yes":"No")<<"\n";
	return 0;
}
