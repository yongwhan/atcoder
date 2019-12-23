#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	double x;
	priority_queue<double> pq;
	while(n-->0)
		cin>>x, pq.push(-x);
	while(pq.size()>1) {
		double u=-pq.top(); pq.pop();	
		double v=-pq.top(); pq.pop();
		pq.push(-(u+v)/2);
	}
	cout<<setprecision(10)<<fixed<<-pq.top()<<"\n";
	return 0;
}
