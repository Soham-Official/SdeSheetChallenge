#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<arr.size()-2;i++){
        int low=i+1;
        int high=arr.size()-1;
        while(low<high){
            if(arr[i]+arr[low]+arr[high]==K){
                vector<int>v;
                v.push_back(arr[i]);
                v.push_back(arr[low]);
                v.push_back(arr[high]);
                ans.push_back(v);
                while(low<high and v[1]==arr[low]) low++;
                while(low<high and v[2]==arr[high]) high--;  
            }
            else if(arr[i]+arr[low]+arr[high]<K) low++;
            else high--;
        }
        while(i<arr.size()-2 and arr[i+1]==arr[i]) i++;
    }
    return ans;
}
