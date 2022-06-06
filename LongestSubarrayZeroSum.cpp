#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
  int ans=0,sum=0;
    unordered_map<int,int>mp;
  for(int i=0;i<arr.size();i++){
      sum+=arr[i];
      if(sum==0) ans=max(ans,i+1);
      else if(mp.find(sum)!=mp.end()) ans=max(ans,i-mp[sum]);
      else mp[sum]=i;
  }
    return ans;

}
