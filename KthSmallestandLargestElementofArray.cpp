#include <bits/stdc++.h> 
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	priority_queue<int>q1;
    priority_queue<int,vector<int>,greater<int>>q2;
    for(int i=0;i<n;i++){
        q1.push(arr[i]);
        q2.push(arr[i]);
        if(q1.size()>k) q1.pop();
        if(q2.size()>k) q2.pop();
    }
    vector<int>ans;
    ans.push_back(q1.top());
    ans.push_back(q2.top());
    return ans;
}
