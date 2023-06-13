//find out the largest sum of subarray
//brute force approach o(N^3) 
#include<bits/stdc++.h>
using namespace std;
int largestSumofSubarray(int arr[],int n){
	int largest_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subArraysum=0;
			for(int k=i;k<=j;k++){
				//cout<<arr[k]<<",";
				subArraysum+=arr[k];
			}
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
     
     cout<<largestSumofSubarray(arr,n)<<endl;
     return 0;
}
