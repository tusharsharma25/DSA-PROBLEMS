#include<bits/stdc++.h>
using namespace std;


/*bool compare(int a,int b){
	//cout<<"comparing"<<a<<"and"<<b<<endl;
	return a<b;
}*/
int main()
{
    int arr[]={10,9,8,6,5,4,3,2,11,333,4};
    int n=sizeof(arr)/sizeof(int);
    //sort(arr,arr+n,compare);
    //reverse(arr,arr+n);
    sort(arr,arr+n,greater<int>());//inbuilt compare function
    
    for(int x:arr){
    	cout<<x<<",";
    }
    return 0;

}

