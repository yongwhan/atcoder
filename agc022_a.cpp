#include<iostream>
#include<algorithm>
using namespace std;
int a[127]={};
char s[30];
int main(){
	cin >> s;
	int l=1;
	for(int i=0;s[i]!='\0';i++)	a[s[i]]=1,l++;
	for(int c='z';c>='a';c--)
		if(!a[c]) s[l++]=c;
	cout << ((next_permutation(s,s+l)) ? s : "-1") << endl;
}
