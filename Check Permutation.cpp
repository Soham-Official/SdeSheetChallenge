bool areAnagram(string &str1, string &str2){
    vector<int>h(26,0);
    for(int i=0;i<str1.size();i++) h[str1[i]-'a']++;
    for(int i=0;i<str2.size();i++) h[str2[i]-'a']--;
    for(int i=0;i<26;i++){
        if(h[i]!=0) return false;
    }
    return true;
}
