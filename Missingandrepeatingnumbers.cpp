#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int x=arr[0];
    for(int i=1;i<n;i++) x^=arr[i];
    for(int i=1;i<=n;i++) x^=i;
    int pos,idx=0;
    while(x){
        if((x&1)==1) {
            pos=idx;
            break;
        }
        idx++;
        x=x>>1;
    }
    int bucket1=0,bucket2=0;
    for(int i=1;i<=n;i++){
        int ii=i>>pos;
        if((ii&1)==1) bucket1^=i;
        else bucket2^=i;
    }
    for(int i=0;i<n;i++){
        int ii=arr[i]>>pos;
        if((ii&1)==1) bucket1^=arr[i];
        else bucket2^=arr[i];
    }
    pair<int,int> ans;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==bucket1) flag=1;
    }
    if(flag==1){
        ans.first=bucket2;
        ans.second=bucket1;
    }
    else{
        ans.second=bucket2;
        ans.first=bucket1;
    }
    return ans;

}
