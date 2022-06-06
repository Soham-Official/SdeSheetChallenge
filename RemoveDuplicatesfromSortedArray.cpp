int removeDuplicates(vector<int> &arr, int n) {
	int k=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[k]) arr[++k]=arr[i];
    }
    return k+1;
}
