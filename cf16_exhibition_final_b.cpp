#include<bits/stdc++.h>
using namespace std;
int main() {
	double x1,x2,x3,y1,y2,y3,a,b,c,m,r;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
	b=sqrt((y2-y3)*(y2-y3)+(x2-x3)*(x2-x3));
	c=sqrt((y1-y3)*(y1-y3)+(x1-x3)*(x1-x3));
	m=max({a,b,c});
	r=abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/(a+b+c);
	cout<<setprecision(15)<<m/(2+m/r)<<endl;
	return 0;
}
