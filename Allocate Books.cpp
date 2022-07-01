bool possible(vector<int>arr,int m , long long  mid,int n){
    long long  sum=0;
    long long  count=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;
        sum+=arr[i];
        if(sum>mid){
            sum=arr[i];
            count++;
        }
        if(count>m) return false;
    }
    return true;
}
long long ayushGivesNinjatest(int m, int n, vector<int> arr) 
{	
	if (m>n) return -1;
    long long high=0;
    long long ans=-1;
    long long low=INT_MIN;
    for(int i=0;i<n;i++) {
        high+=arr[i];
        low=max(low,(long long)arr[i]);
    }
    while(low<=high){
        long long mid=(low+high)/2;
        if(possible(arr,m,mid,n)){
             high=mid-1;
             ans=mid;
        }
        else low=mid+1;
    }
    return ans;
    
}
