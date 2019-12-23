#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	for (int i=-(a-1); i<=a-1; i++)
		cout<<b+i<<" ";
	cout<<"\n";
	return 0;
}
