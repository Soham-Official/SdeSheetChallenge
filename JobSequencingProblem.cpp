#include<bits/stdc++.h>
static bool comp(vector<int> a,vector<int>b){
    if(a[1]!=b[1]) return a[1]>b[1];
    else return a[0]>b[0];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),comp);
    vector<int> v(3001,-1);
    int profit=0;
    for(int i=0;i<jobs.size();i++){
        int deadline=jobs[i][0];
        while(deadline>0 and v[deadline]!=-1) deadline--;
        if(deadline>0) {
            v[deadline]=1;
            profit+=jobs[i][1];
        }
    }
    return profit;
}
