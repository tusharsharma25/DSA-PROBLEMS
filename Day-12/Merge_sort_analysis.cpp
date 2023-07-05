void mergeSort(vector<int> &arr,int s,int e){
	
	//base case
	if(s>=e){
		return;
		
	}
	
	//rec case
	int mid = (s+e)/2;
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	return merge(arr,s,e);
	
}