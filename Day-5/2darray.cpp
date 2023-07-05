#include<bits/stdc++.h>
using namespace std;
//passed bey refrence

void print(int arr[][100],int n,int m){
	
	//ptint
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
 
int main()
{
    //constraints
    int arr[1000][100];
    //n rows m cols
    int n,m;
    cin>>n>>m;
    
    //take input
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>arr[i][j];
    		
    	}
    }
    
    print(arr,n,m);
    
    return 0;

}

