#include<bits/stdc++.h>
vector<int> findSpans(vector<int> &price) {
    stack<pair<int,int>>st;
    vector<int>v;
    for(int i=0;i<price.size();i++){
        int count=1;
        while(!st.empty() and st.top().first<=price[i]){
              count+=st.top().second;
              st.pop();
            }
        st.push({price[i],count});
        v.push_back(count);   
    }
    return v;

}
