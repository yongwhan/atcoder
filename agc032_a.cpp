#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n+1,-1);
	for (int i=1; i<=n; i++)
		cin>>a[i];
	stack<int> stk;
	while(1) {
		bool up=false;
		int sz=a.size();
		for (int i=sz-1; i>=1; i--)
			if(a[i]==i) {
				up=true;
				stk.push(i);
				a.erase(a.begin()+i);
				break;
			}
		if(!up) break;
	}
	if(stk.size()!=n) {
		cout<<-1<<"\n";
		return 0;
	}
	while(!stk.empty())
		cout<<stk.top()<<"\n", stk.pop();
	return 0;
}
