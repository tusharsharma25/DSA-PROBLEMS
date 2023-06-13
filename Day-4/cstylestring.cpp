#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1000]="apple";
	char b[1000];
	
	//calc length
	cout<<strlen(a)<<endl;
	
	//strcpy
	strcpy(b,a);
	cout<<b<<endl;
	
	//compare
	cout<<strcmp(a,b)<<endl;
	
	char web[]="www.";
	char domain[]="codingblocks.com";
	
	strcpy(b,strcat(web,domain));
	cout<<b;
	
	cout<<strcmp(a,b)<<endl;
	
	return 0;
}