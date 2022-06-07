#include<bits/stdc++.h>
static bool comp(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
    if(a.second.second!=b.second.second) 
        return a.second.second<b.second.second;
    else return a.first<b.first;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int,pair<int,int>>>ans;
    for(int i=0;i<start.size();i++){
        ans.push_back({i+1,{start[i],end[i]}});
    }
    sort(ans.begin(),ans.end(),comp);
    vector<int>v;
    v.push_back(ans[0].first);
    int last=ans[0].second.second;
    for(int i=1;i<start.size();i++){
//         cout<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
        if(ans[i].second.first>last){
            v.push_back(ans[i].first);
            last=ans[i].second.second;
        }
    }
    return v;
}
