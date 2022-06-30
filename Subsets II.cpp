#include<bits/stdc++.h>
void help(vector<int> &arr,int n,vector<vector<int>>&ans,vector<int>&v,int idx){
    ans.push_back(v);
    for(int i=idx;i<n;i++){
        if(i!=idx and arr[i]==arr[i-1]) continue;
        v.push_back(arr[i]);
        help(arr,n,ans,v,i+1);
        v.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    vector<int>v;
    sort(arr.begin(),arr.end());
    help(arr,n,ans,v,0);
    return ans;
}
