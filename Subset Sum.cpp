void help(vector<int>&ans,vector<int>num,int idx,int sum){
    if(idx==num.size()){
      ans.push_back(sum);  
      return;  
    } 
    help(ans,num,idx+1,sum);
    help(ans,num,idx+1,sum+num[idx]);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    help(ans,num,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}
