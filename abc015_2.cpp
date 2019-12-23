#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a=0, b=0, x;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x) a+=x, b++;
	}
	int q=a/b, r=a%b;
	if(r) q++;
	cout << q << endl;
	return 0;
}
