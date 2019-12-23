#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	int i=0;
	while(a[0]==a[i])
		i++;
	cout<<a[i]<<endl;
}
