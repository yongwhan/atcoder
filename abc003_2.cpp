#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s="atcoder", a,b;
	set<char> st(s.begin(),s.end());
	cin>>a>>b;
	int n=a.size();
	for (int i=0; i<n; i++) {
		if(a[i]=='@') {
			if(b[i]!='@') {
				if(st.find(b[i])==st.end()) {
					cout << "You will lose" << endl;
					return 0;
				}
			}
		} else {
			if(b[i]=='@') {
				if(st.find(a[i])==st.end()) {
					cout << "You will lose" << endl;
					return 0;
				}
			} else {
				if(a[i]!=b[i]) {
					cout << "You will lose" << endl;
					return 0;
				}
			}
		}
	}
	cout << "You can win" << endl;
	return 0;
}
