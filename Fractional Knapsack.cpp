#include<bits/stdc++.h>
static bool comp(pair<int, int> a,pair<int, int> b){
    return (double)a.second/a.first>(double)b.second/b.first;
}
double maximumValue (vector<pair<int, int>>& arr, int n, int w)
{
    sort(arr.begin(),arr.end(),comp);
    double ans=0.0;
    int i=0;
    while(w and i<n){
            if(arr[i].first<=w) {
                ans+=arr[i].second;
                w-=arr[i].first;
            }
            else{
                double unitvalue=(double) arr[i].second / arr[i].first ;
                ans+=unitvalue*w;
                w=0;
            }
            i++;
        }
        return ans;
}
