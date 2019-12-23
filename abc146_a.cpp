#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<string> lst={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	string s; cin>>s;
	for (int i=0; i<7; i++)
		if(s==lst[i]) {
			cout<<7-i<<"\n";
			break;
		}
	return 0;
}
