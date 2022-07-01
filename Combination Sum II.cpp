#include<bits/stdc++.h>
void help(vector<int> &arr,vector<int>&v,vector<vector<int>>&ans,int target,int n,int idx){
    if(target==0) {
        ans.push_back(v);
        return;
    }
    if(target<0 or idx>=n) return;
    for(int i=idx;i<n;i++){
        if(i!=idx and arr[i]==arr[i-1]) continue;
        if(arr[i]<=target){
            v.push_back(arr[i]);
            help(arr,v,ans,target-arr[i],n,i+1);
            v.pop_back();
        }
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	vector<int>v;
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    help(arr,v,ans,target,n,0);
    return ans;
}
