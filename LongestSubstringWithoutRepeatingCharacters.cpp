#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    unordered_map<char,int>mp;
        int left=0,ans=0;
        for(int i=0;i<input.size();i++){
            if(mp.find(input[i])!=mp.end())
                left=max(left,mp[input[i]]+1);
                mp[input[i]]=i;
                ans=max(ans,i-left+1);
        }
    if(left==-1) return input.size();
    else return ans;
}
