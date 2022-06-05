#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    int idx=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]) idx=i;
    }
    if(idx==-1) {
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[idx]){
            swap(a[i],a[idx]);
            reverse(a.begin()+idx+1,a.end());
            break;
        }
    }
    return a;
    
}
