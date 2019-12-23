#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	set<char> st(s.begin(), s.end());
	for (char ch='a'; ch<='z'; ch++)
		if(st.find(ch)==st.end()) {
			cout << ch << endl;
			return 0;
		}
	cout << "None" << endl;
	return 0;
}
