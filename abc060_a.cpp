#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string A,B,C; cin>>A>>B>>C;
	cout << (A.back()==B.front() && B.back()==C.front() ? "YES" : "NO") << endl;
	return 0;
}
