#include<bits/stdc++.h>
using namespace std;

int main() {
	char g[3][3];
	for (int i=0; i<3; i++)
		for (int j=0; j<3; j++)
			cin>>g[i][j];
	for (int i=0; i<3; i++)
		cout<<g[i][i];
	cout<<"\n";
	return 0;
}
