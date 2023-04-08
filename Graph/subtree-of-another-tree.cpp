class Solution {
public:
       bool ok(TreeNode* root,TreeNode* subRoot)
       {
        if((!root and  !subRoot) )return true;
        else if(!root or !subRoot)return false;  
        if(root->val==subRoot->val)
        {
            return ok(root->left,subRoot->left)&ok(root->right,subRoot->right);   
        }
        return false;
       }
     
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if((!root and  !subRoot) )return true;
        else if(!root or !subRoot)return false;
        cout<<root->val<<" "<<subRoot->val<<endl;
         if(root->val==subRoot->val)
        {
            return   ok(root,subRoot)|isSubtree(root->left,subRoot)|isSubtree(root->right,subRoot);;
        }
        return  isSubtree(root->left,subRoot)|isSubtree(root->right,subRoot);
  
    }
}
