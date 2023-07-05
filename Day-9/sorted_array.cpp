
//WAF to check if array is sorted
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
	
	//Base case
	if(n==1 or n==0){
		return true;
	}
	
	//rec case
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}
	
	return false;
}


bool isSortedTwo(int arr[],int i,int n){
	if(n==i-1){
		return true;
	}
	if(arr[i]<arr[i+1] and isSortedTwo(arr,i+1,n)){
		return true;
	}
	return false;
}


int main()
{
   int arr[]={1,2,3,4,6};
   int n=sizeof(arr)/sizeof(int);
   
   //cout<<isSorted(arr,n)<<endl;
   cout<<isSortedTwo(arr,0,n)<<endl;
   
   return 0; 

}

