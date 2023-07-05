  #include<bits/stdc++.h>
  using namespace std;
  
  int main()
  {
 //Demo vector
 //vector<int> arr={1,2,3,4,45};
 
 //Fill Constructor
  	vector<int> arr(10,76);
  	//vector<int> visisted(100,0;)
 
 arr.pop_back();
 
 arr.push_back(17);
 
 //Print all the elements
 /*for(int i=0;i<arr.size();i++){
 	cout<<arr[i]<<endl;*/
 
 for(int x:arr){
 	cout<<x<<endl;
 }
     
 
 return 0;
  
  }
  
  