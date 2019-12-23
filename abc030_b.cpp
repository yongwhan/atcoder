#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; double m; cin>>n>>m;
	double x=n%12*30+m*.5;
	cout<<min(abs(x-m*6),360-abs(m*6-x))<<endl;
	return 0;
}
