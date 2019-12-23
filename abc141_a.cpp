#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const string lst[]={"Sunny", "Cloudy", "Rainy"};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int idx=-1;
	for (int i=0; i<3; i++)
		if(lst[i]==s) idx=i;
	cout<<lst[(idx+1)%3]<<"\n";
	return 0;
}
