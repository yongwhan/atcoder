#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=1; i<=9; i++)
		for (int j=1; j<=9; j++)
			if(i*j==n) {
				cout<<"Yes\n";
				return 0;
			}
	cout<<"No\n";
	return 0;
}
