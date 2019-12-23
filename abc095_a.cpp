#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=700;
	char ch;
	while(cin>>ch)
		if(ch=='o')
			ret+=100;
	cout << ret << endl;
	return 0;
}
