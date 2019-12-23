#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	deque<int> dq;
	int n,a; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		if(i%2) dq.push_front(a);
		else dq.push_back(a);
	}
	if(n%2) {
		while(!dq.empty())
			cout << dq.back() << " ", dq.pop_back();
	} else {
		while(!dq.empty())
			cout << dq.front() << " ", dq.pop_front();
	}
	cout << endl;

	return 0;
}
