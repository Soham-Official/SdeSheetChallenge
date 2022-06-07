#include <bits/stdc++.h> 
int merge(vector<int> &arr, int low,int mid,int high){
    int i=low,j=mid;
    vector<int>temp;
    int ans=0,k=mid;
    for(int i=low;i<mid;i++){
            while(k<=high and arr[i]>2*arr[k]) k++;
            ans+=k-mid;
        }
    while(i<mid and j<=high){
        if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
        
    }
    while(i<mid) temp.push_back(arr[i++]);
    while(j<=high) temp.push_back(arr[j++]);
    for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];
    return ans;
}
int mergesort(vector<int> &arr, int low,int high){
    int ans=0;
    if(low<high){
        int mid=(low+high)/2;
        ans+=mergesort(arr,low,mid);
        ans+=mergesort(arr,mid+1,high);
        ans+=merge(arr,low,mid+1,high);
    }
    return ans;
}
int reversePairs(vector<int> &arr, int n){
    return mergesort(arr,0,n-1);
    
}
