bool isValidParenthesis(string expression)
{
    stack<char>st;
    for(int i=0;i<expression.size();i++){
        if(expression[i]=='(' or expression[i]=='{' or expression[i]=='[') st.push(expression[i]);
        else{
            if(expression[i]==')'){
                if(!st.empty() and st.top()=='(') st.pop();
                else return false;
            }
            else if(expression[i]=='}'){
                if(!st.empty() and st.top()=='{') st.pop();
                else return false;
            }
            else if(expression[i]==']'){
                if(!st.empty() and st.top()=='[') st.pop();
                else return false;
            }
        }
    }
    return st.empty();
}
