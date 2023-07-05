#include<bits/stdc++.h>
using namespace std;

class Vector{
	
	int *arr;
	int cs;
	int ms;
public:
      
      Vector(int max_size=1){
      	cs=0;
      	ms=max_size;
      	arr=new int[ms];
      	
      }
      void push_back(const int d){
      	//Two cases
        if(cs==ms){      	
      	
      	//create a new array and delete the old one ,double the capacity
      	int *oldarr=arr;
      	ms=2*ms;
      	arr=new int[ms];
      	//copy the elements
      	for(int i=0;i<cs;i++){
      		arr[i]=oldarr[i];
      	}
      	//Delete the old arr
      	delete [] oldarr;
      	
      	}
      	
      	arr[cs]=d;
      	cs++;
      	
      	
      }
      
      void pop_back()
      {
      	if(cs>=0){
      		cs--;
      	}
      }
      bool isEmpty() const{
      	return cs==0;//return true when cs=0
      }
      
      
      int front() const{
      	return arr[0];
      }
      
      int back() const{
      	return arr[cs-1];
      	
      }
      
      int at(int i) const{
      	return arr[i];
      }
      
      int size() const{
      	return cs;
      }
      
      int capacity() const{
      	return ms;
      }
      
      //operator overloading
      int operator[] (int i) const{
      	return arr[i];
      }
      
      	
};





int main()
{
    Vector v(5);
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
          v.push_back(6);
          v.pop_back();
          cout<<v.size()<<endl;
          cout<<v.capacity()<<endl;
          cout<<v.at(2)<<endl;

//print all the elements of this vector
          for(int i=0;i<v.size();i++){
          	//cout<<v.at(i)<<",";
          	cout<<v[i]<<",";
          }


cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

return 0;
}

