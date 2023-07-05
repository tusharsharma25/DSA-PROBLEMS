#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=10;
    float y=5.5;
    cout<<&x<<endl;
    //cout<<&y<<endl;
    
    
    //Pointer demo
    int *xptr=&x;
    cout<<xptr<<endl;
    
    //Address of pointer variable
    cout<<&xptr<<endl;
    
    //pointer to a pointer
    int* *xxptr=&xptr;
    cout<<xxptr<<endl;
    
    return 0;

}

