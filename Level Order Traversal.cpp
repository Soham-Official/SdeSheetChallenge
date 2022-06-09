/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>v;
    if(!root) return v;
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<q.size();i++){
            auto ele=q.front();
            v.push_back(ele->val);
            q.pop();
            if(ele->left) q.push(ele->left);
            if(ele->right) q.push(ele->right);
        }
    }
    return v;
}
