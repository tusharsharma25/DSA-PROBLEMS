#include<bits/stdc++.h>
using namespace std;
  
  void counting_sort(int a[],int n){
  	//largest element
  	int largest=-1;
  	for(int i=0;i<n;i++){
  		largest=max(largest,a[i]);
  		}
  		//create a count array/vector
  		vector<int> freq(largest+1,0);
  		
  		//update the frequency array

for(int i=0;i<n;i++){
	freq[a[i]]++;
}  		
  		
  		//put back the elements from freq into original array
int j=0;
for(int i=0;i<=largest;i++){
	while(freq[i]>0){
		a[j]=i;
		freq[i]--;
		j++;
	}
}
	return;

  		
  		
  }
  
  
  int main()
  	
{
    	int arr[]={1,3,4,2,55,6,9};
	int n=sizeof(arr)/sizeof(int);
	counting_sort(arr,n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}	
	
	return 0;
    


}

