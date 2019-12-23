#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	for (char ch : s) {
		if(ch=='9') ch='1';
		else if(ch=='1') ch='9';
		cout << ch;
	}
	cout << endl;
	return 0;
}
