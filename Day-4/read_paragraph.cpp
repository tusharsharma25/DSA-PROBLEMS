#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char paragraph[1000];
	cin.getline(paragraph,1000,'#');//by default \n in place of # here
	cout<<paragraph<<endl;
	return 0;
}