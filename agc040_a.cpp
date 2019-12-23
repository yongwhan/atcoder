#include<bits/stdc++.h>
using namespace std;
#define int long
signed main(){
	string s;
	cin>>s;
	int pos=0,n=s.size(),i,j,b=0,r=0;
	while(pos<n){
		i=j=0;
		while(s[pos+i]=='>')++i;
		while(s[pos+i+j]=='<')++j;
		if(b<=i)r-=b;
		else r-=i;
		r+=i*(i+1)/2+j*(j+1)/2;
		b=j;
		pos+=i+j;
	}
	cout<<r<<"\n";
	return 0;
}
