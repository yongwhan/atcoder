#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool palin(int x) {
	stringstream ss; ss<<x;
	string s=ss.str(), t=s;
	reverse(t.begin(), t.end());
	return s==t;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int ret=0;
	for (int i=a; i<=b; i++)
		if(palin(i))
			ret++;
	cout << ret << endl;
	return 0;
}
