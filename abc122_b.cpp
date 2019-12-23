#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

set<char> st={'A','C','G','T'};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=0;
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			int cur=0;
			for (int k=i; k<=j; k++) {
				if(!st.count(s[k])) {
					cur=-1; break;
				}
				cur++;
			}
			ret=max(ret,cur);
		}
	}
	cout<<ret<<"\n";
	return 0;
}
