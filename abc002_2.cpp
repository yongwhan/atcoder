#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char ch;
	string s="aeiou";
	set<char> st(s.begin(), s.end());
	while(cin>>ch)
		if(st.find(ch)==st.end())
			cout<<ch;
	cout << endl;
	return 0;
}
