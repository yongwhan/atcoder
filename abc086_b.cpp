#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	s+=t;
	stringstream ss; ss<<s;
	int x; ss>>x;
	for (int i=0; i<1000; i++)
		if(x==i*i) {
			cout << "Yes" << endl;
			return 0;
		}
	cout << "No" << endl;
	return 0;
}
