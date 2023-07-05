#include<bits/stdc++.h>
using namespace std;


//Custom comparison operator
bool compare(string a,string b){
	if(a.length()==b.length()){
		return a<b;//lexicographic order
	}
	return a.length()<b.length();//length order
}

void findSubsets(char *input,char *output,int i,int j,vector<string> &list){
	
	//base case
	if(input[i]=='\0'){
		
		output[j]='\0';
		string temp(output);
		list.push_back(temp);
		return;
	}
	
	//rec case
	//Include the ith letter
	output[j]=input[i];
	findSubsets(input,output,i+1,j+1,list);
	
	//Exclude the ith letter
	//Overwritting
	findSubsets(input,output,i+1,j,list);
}

int main(){
	char input[100];
	char output[100];
	vector<string> list;
	
	cin>>input;
	findSubsets(input,output,0,0,list);
	sort(list.begin(),list.end(),compare);
	
	//print the output
	for(auto s:list){
		cout<<s<<" ,";
	}
	return 0;
}
