// Implement class for minStack.
#include <bits/stdc++.h> 
class minStack
{
	// Write your code here.
	public:
		stack<pair<int,int>>st;
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int val)
		{
           if(st.empty()) 
            st.push({val,val});
            else
            st.push({val,min(val,st.top().second)});   
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
            if(st.empty()) return -1;
			int x=st.top().first;
            st.pop();
            return x;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
            if(st.empty()) return -1;
			return st.top().first;
           
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(st.empty()) return -1;
            return st.top().second;
		}
};
