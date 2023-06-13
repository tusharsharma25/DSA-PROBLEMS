#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
	int s=0;
	int e=n-1;
	while(s<=e){
		
		int mid=(s+e)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		
	}
	return -1;
}


int main()
{
    int arr[]={1,2,10,11,19,29,39};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    
    int index=binarySearch(arr,n,key);
    if(index!=-1){
    	cout<<"key found at index="<<index<<endl;
    }
    else{
    	cout<<"Not found"<<endl;
    }
    
    

}

