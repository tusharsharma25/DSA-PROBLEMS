#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
	
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s+=1;
		e-=1;
	}
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    
    
     for(int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverseArray(arr,n);
    
    for(int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;

}

