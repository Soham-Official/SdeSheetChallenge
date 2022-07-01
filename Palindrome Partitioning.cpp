bool palindrome(string s,int start,int end){
    while(start<end){
        if(s[start++]!=s[end--]) return false;
    }
    return true;
}
void help(string s,vector<string>&v,vector<vector<string>>&ans,int idx){
    if(idx==s.size()){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(palindrome(s,idx,i)){
            v.push_back(s.substr(idx,i-idx+1));
            help(s,v,ans,i+1);
            v.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    vector<string>v;
    vector<vector<string>>ans;
    help(s,v,ans,0);
    return ans;
}
