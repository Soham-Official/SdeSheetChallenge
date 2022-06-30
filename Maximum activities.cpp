#include<bits/stdc++.h>
static bool comp(pair<int,int> a,pair<int,int>b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    if(!start.size()) return 0;
    vector<pair<int,int>>v;
    for(int i=0;i<start.size();i++)
        v.push_back({start[i],finish[i]});
    sort(v.begin(),v.end(),comp);
    int ans=1,last=v[0].second;    
    for(int i=1;i<v.size();i++){
        if(v[i].first>=last){
            last=v[i].second;
            ans++;
        } 
    }
    return ans;
}
