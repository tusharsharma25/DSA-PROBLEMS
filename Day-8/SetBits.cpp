
// WAF to count set bits in a number
//set bits  are 1 bits
//9 = 1001 =2 set bits
#include<bits/stdc++.h>
using namespace std;

int count_bits(int n){
	 
	 int cnt = 0;
	 
	 while(n>0){
	 	int last_bit = (n&1);
	 	cnt += last_bit;
	 	n = n>>1;
	 }
	 
	 return cnt;
}

// counting set bits hack(faster method)
int count_bits_hack(int n){
	
	int ans = 0;
	while(n>0){
		//Remove the last set bit from the current number
		n = n & (n-1);
		ans++;
	}
	return ans;
}

int main()
{
  int n;
  cin>>n;
  cout<<count_bits(n)<<endl;
  cout<<count_bits_hack(n)<<endl;
  return 0;  

}

