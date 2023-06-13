

//Given a input sentence ,count the number of alphabets, digits and spaces in the sentencs 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //store and then count 
    //or
    //read one by one and then count
    
    char ch;
    ch=cin.get();
    
    //count
int digits=0;
int aplha=0;
int space=0;

while(ch!='\n'){
	
	if(ch>='0'and ch<='9'){
		digits++;
	}
	else if((ch>='a' and ch<='z') or (ch>='A'and ch<='Z')){
		aplha++;
		
	}
	else if(ch==' ' or ch=='\t'){
		space++;
	}
	
	ch=cin.get();
}

cout<<"total alphabets"<<alpha<<endl;

cout<<"total digits"<<digits<<endl;

cout<<"total spaces"<<space<<endl;

return 0;

}
