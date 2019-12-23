#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b,x; cin>>a>>b>>x;
	double s=x/a;
	cout<<setprecision(10)<<fixed<<atan(s<a*b/2?b/(s/b*2):(b-s/a)*2/a)*180/M_PI<<"\n";
	return 0;
}
