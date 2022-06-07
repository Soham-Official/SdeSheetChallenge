#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    unordered_map<int,pair<int,int>>mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            mp[target-arr[i]-arr[j]]={i,j};
    }
    }
//     for(auto x:mp) cout<<x.first<<" ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(mp.find(arr[i]+arr[j])!=mp.end() and mp[arr[i]+arr[j]].first!=i and 
              mp[arr[i]+arr[j]].second!=j){
            return "Yes";
                
            } 
//             cout<<endl;
        }
    }
   return "No";
    
}
