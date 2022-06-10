/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>v;
    queue<TreeNode<int>*>q;
    if(!root) return v;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            auto ele=q.front();
            q.pop();
            if(i==0) v.push_back(ele->data);
            if(ele->left) q.push(ele->left);
            if(ele->right) q.push(ele->right)  ;
        }
    }
    return v;
    
}
