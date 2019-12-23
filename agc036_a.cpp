#include<bits/stdc++.h>
using namespace std;

int main() {
	long long s,m=1e9,t;
	cin>>s; t=(m-s%m)%m;
	printf("0 0 %lld 1 %lld %lld\n", m,t,(s+t)/m);
	return 0;
}
