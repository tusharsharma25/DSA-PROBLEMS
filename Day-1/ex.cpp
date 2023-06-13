#include<bits/stdc++.h>
using namespace std;
int  pairs(int arr[], int k, int x)
{
    for (int i=0;i<(k-1);i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                return 1;
            }
        }
    }
 
    return 0;
}



int main()
{
    

}

