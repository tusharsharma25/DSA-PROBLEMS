#include<bits/stdc++.h>
using namespace std;

int main()
{
    
char sentence[1000];
char temp=cin.get();
int len= 0;
while(temp!='\n'){
	sentence[len++]=temp;
	//update the value of temp
	temp=cin.get();
}

cout<<"length"<<len<<endl;
cout<<sentence<<endl;


}
