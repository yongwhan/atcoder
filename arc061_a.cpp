#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	long long l=s.size(), ret=0;
	for(int bt=0; bt<1<<(l-1); bt++) {
		long long val=0, cur=0;
		for (int j=0; j<l; j++) {
			val*=10; val+=s[j]-'0';
			if(j<l-1 && bt&(1<<j))
				cur+=val, val=0;
		}
		cur+=val;
		ret+=cur;
	}
	cout<<ret<<'\n';
	return 0;
}
