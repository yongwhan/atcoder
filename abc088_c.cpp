#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x[3][3];
	for (int i=0; i<3; i++)
		for (int j=0; j<3; j++)
			cin>>x[i][j];
	for (int i=1; i<3; i++) {
		set<int> st;
		for (int j=0; j<3; j++)
			st.insert(x[i][j]-x[i-1][j]);
		if(st.size()!=1) {
			cout<<"No\n";
			return 0;
		}
	}

	for (int j=1; j<3; j++) {
		set<int> st;
		for (int i=0; i<3; i++)
			st.insert(x[i][j]-x[i][j-1]);
		if(st.size()!=1) {
			cout<<"No\n";	
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}
