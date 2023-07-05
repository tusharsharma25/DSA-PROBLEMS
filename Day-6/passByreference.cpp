#include<bits/stdc++.h>
using namespace std;


//Pass by value
/*void applytax(int income){
	float tax=0.10;
	income=income-income*tax;
	
}  */  


//Pass by refrence using reference variables
void applytax(int &income){
	float tax=0.10;
	income=income-income*tax;
	
} 

int main(int argc, char const *argv[])
{
	int income;
	cin>>income;
	
	applytax(income);
	cout<<income<<endl;
	return 0;
}


