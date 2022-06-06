#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_map<int,int>mp;
    int ans=0;
    for(auto i:arr) mp[i]=i;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]-1)==mp.end()){
            int count=0;
            int x=arr[i];
            while(mp.find(x)!=mp.end()) {
                count++;
                x++;
            }
            ans=max(ans,count);
        }
    }
    return ans;
}
