#include<bits/stdc++.h>
using namespace std;


void pritAllPairs(int arr[],int n){
	
	
    for(int i=0;i<n;i++)
    {
    	int x=arr[i];
    	for(int j=i+1;j<n;j++){
    		int y=arr[j];
    		
    		cout<< x<<","<< y<<endl;
    	}
    	cout<<endl;
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    pritAllPairs(arr,n);
 return 0;
}


