#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n==100) cout << "Perfect" << endl;
	else if(n>=90) cout << "Great" << endl;
	else if(n>=60) cout << "Good" << endl;
	else cout << "Bad" << endl;
	return 0;
}
