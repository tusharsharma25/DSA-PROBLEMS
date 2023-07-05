#include<iostream>
#include "vector.h"
#include<vector>


using namespace std;





int main()
{
  vector<char> vc;
  vc.push_back('a');
  vc.push_back('b');
  
  for(int i=0;i<vc.size();i++){
    cout<<vc[i]<<" ,";
  }
    vector<int> v(5);
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

