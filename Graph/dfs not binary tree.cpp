/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int>v;
    vector<int> postorder(Node* root) {

     dfs(root);
     if(root)v.push_back(root->val);
     return v;
        
    }

    void dfs(Node* root)
    {
         if(!root)return;
        
         for(auto root:root->children)
         {

         if(root)
         {
            dfs(root);
             v.push_back(root->val);
            
         }

         
         }
        

    }

};
