#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char ch;
	int ret=0;
	while(cin>>ch)
		if(ch=='+') ret++;
		else ret--;
	cout << ret << endl;
	return 0;
}
