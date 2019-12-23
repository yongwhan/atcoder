#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int prev=1, cur;
	int a,b; cin>>a>>b;
	for (int inc=2; inc<1000; inc++) {
		cur=prev+inc;
		if(prev-a==cur-b) {
			cout << prev-a << endl;
			return 0;
		}
		prev=cur;
	}
	return 0;
}
