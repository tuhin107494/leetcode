
class Solution {
public:
    int maxDepth(Node* root) {

        if(!root)return 0;
        int mx=0;
        for(auto root:root->children)
        {
           mx=max(mx,maxDepth(root));
        }
       

    return mx+1;
        
        
    }
};
