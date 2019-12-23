#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int A,B; char op;
	cin>>A>>op>>B;
	if(op=='+') A+=B;
	else A-=B;
	cout << A << endl;
	return 0;
}
