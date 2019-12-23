#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	s+="@";
	char prev=s[0];
	int ct=0;
	for (auto ch : s) {
		if(ch==prev) ct++;
		else {
			cout << prev << ct;
			prev=ch; ct=1;
		}
	}
	cout << endl;
	return 0;
}
