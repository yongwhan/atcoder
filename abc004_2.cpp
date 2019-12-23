#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s(4);
	for (int i=0; i<4; i++)
		getline(cin,s[i]),
		reverse(s[i].begin(), s[i].end());
	for (int i=0; i<4; i++)
		cout << s[3-i] << endl;
	return 0;
}
