int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int left=0,right=0;
    int ans=0;
    while(right<n){
        if(arr[right]==0){
            k--;
                while(k<0 and left<right){
                if(arr[left]==0) k++;
                left++;
            
            }
        }
        ans=max(ans,right-left+1);
        right++;
    }
    return ans;
}
