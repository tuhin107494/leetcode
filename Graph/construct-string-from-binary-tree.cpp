class Solution {
public:
    string a;
    string tree2str(TreeNode* root) {
   
    if(!root)return a;
    dfs(root);
    return a;

    }

    void dfs(TreeNode* root)
    {
         if(!root)return;
         stringstream ss;
         ss<<(root->val);
         string b=ss.str();
         a+=b;
         if((root->left) or ( !(root->left) and (root->right)))
         {
             //cout<<(root->left->val)<<endl;
             a+='(';
            dfs(root->left);
            a+=')';
         }
         
         if((root->right))
         {
            a+='(';
           dfs(root->right);
           a+=')';
         } 
        

    }

};
