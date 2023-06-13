#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	//demp vector
    //vector<int> arr={1,2,3,4,5};
    
    //Fill construcutor
    vector<int> arr(10,7);
    
    //Fill constructor
    vector<int> visited(100,0)
    arr.pop_back();
    //push_back o(1)
    arr.push_back(16);
    
    //print all elements of array
    for(int i=0;i<arr.size();i++){
    	cout<<arr[i]<<endl;
    }
    //size of the vector(no. of elements)
    /*cout<<arr.size()<<endl;
    //capacity of vector(actual memory allocated to this vector)

cout<<arr.capacity()<<endl;*/
}

