#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int key,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,0,10,11,9,8,8,7};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int index=linearSearch(arr,key,n);
	if(index!=-1){
		cout<<"element found at "<<index<<endl;
		
	}
	else
	{
		cout<<"not found"<<endl;
	}
	return 0;
    

}

