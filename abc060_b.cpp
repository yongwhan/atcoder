#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int A,B,C; cin>>A>>B>>C;
	for (int i=0; i<B; i++)
		if(i*A%B==C) { cout << "YES" << endl; return 0; }
	cout << "NO" << endl;
	return 0;
}
