#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,i; string s, t="b";
	cin>>n>>s;
	for (i=0; i<=n; i++) {
		if(t.size()>=n)
			break;
		if(i%3==0) t='a'+t+'c';
		else if(i%3==1) t='c'+t+'a';
		else t='b'+t+'b';
	}
	cout << (s==t ? i : -1) << endl;
	return 0;
}
