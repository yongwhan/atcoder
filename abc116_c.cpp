#include<iostream>
using namespace std;
int main() {
	int ret=0, cur=0;
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		int h; cin>>h;
		if (cur<h)
			ret+=h-cur;
		cur=h;
	}
	cout<<ret<<"\n";
	return 0;
}
