#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,x,y,s,d;
	cin>>l>>x>>y>>s>>d;
	double z=(l+d-s)%l, ret=(y>x ? min(z/(x+y),(l-z)/(y-x)) : z/(x+y));
	cout<<setprecision(10)<<fixed<<ret<<"\n";
	return 0;
}
