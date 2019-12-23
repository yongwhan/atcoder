#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	double ret=0;
	for(int i=1;i<=n;i++){
		double cur=1.0/n;
		int now=i;
		while(now<k)
			now*=2, cur/=2;
		ret+=cur;
	}
	cout<<setprecision(15)<<fixed<<ret<<"\n";
	return 0;
}
