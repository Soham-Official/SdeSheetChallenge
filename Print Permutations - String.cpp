void help(vector<string>&v,string s,int idx){
    if(idx==s.size()){
        v.push_back(s);
        return;
    }
    for(int i=idx;i<s.size();i++){
        swap(s[i],s[idx]);
        help(v,s,idx+1);
        swap(s[i],s[idx]);
    }
}
vector<string> findPermutations(string &s) {
    vector<string>v;
    help(v,s,0);
    return v;
}
