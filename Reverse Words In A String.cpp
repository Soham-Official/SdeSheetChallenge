#include<bits/stdc++.h>
string reverseString(string str)
{
    // Write your code here.
    stack<string>st;
    string s="";
    for(int i=0;i<str.size();i++){
        if(str[i]!=' ') s+=str[i];
        else{
            if(s.size()>0) st.push(s);
            s="";
        }
    }
    if(s.size()>0) st.push(s);
    s="";
    while(!st.empty()){
        s+=st.top();
        st.pop();
        if(!st.empty()) s+=" ";
    }
    return s;
}
