class Solution {
public:
     
     map<TreeNode*,int>cnt;
      int subtree(TreeNode* root)
      {
          if(!root)return 0;
          
          return subtree(root->left)+subtree(root->right)+root->val;
      }

    int findTilt(TreeNode* root) {

        if(!root)return 0;
        int left_sum=subtree(root->left);
        int right_sum=subtree(root->right);
        int l=findTilt(root->left);
        int r=findTilt(root->right);
        return l+r+abs(left_sum-right_sum);
        
    }
};
