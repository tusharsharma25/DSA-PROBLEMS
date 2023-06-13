#include<bits/stdc++.h>
using namespace std;
//Prefix sum approach(o(N^2))
int largestSumofSubarray2(int arr[],int n){
	//prefix sum
  int prefix[100]={0};
  prefix[0]=arr[0];
  
  for(int i=1;i<n;i++){
  	prefix[i]=prefix[i-1]+arr[i];
  }
  
  int largest_sum=0;
  
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subArraysum=i>0?prefix[j]-prefix[i-1]:prefix[j];
			//cout<<endl;
			//put a check if subArraysum > largest sum
			largest_sum=max(subArraysum,largest_sum);
		}
	}
	return largest_sum;
}
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(arr)/sizeof(int);
     
     cout<<largestSumofSubarray2(arr,n)<<endl;
     return 0;
}
