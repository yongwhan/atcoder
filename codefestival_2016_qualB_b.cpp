#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	string s; cin>>s;
	vector<int> qual(n,false);
	int x=a+b, y=b;
	for (int i=0; i<n; i++) {
		if(s[i]=='a') {
			if(x>0) qual[i]=true, x--;
		} else if(s[i]=='b') {
			if(x>0&&y>0) qual[i]=true, x--, y--;
		}
	}
	for (int i=0; i<n; i++) {
		cout<<(qual[i]?"Yes":"No")<<"\n";
	}
	return 0;
}
