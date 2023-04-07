                  
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
 

         vector<int>v;
         stack<TreeNode* >st;
          
          while(root or st.size())
          {
               
               while(root )
               {
                   st.push(root);
                   root=root->left;
               }
              
              root=st.top();
              v.push_back(root->val);
              st.pop();
              root=root->right;

          }
        
          map<int,int>cnt;
          int mx=0;
          for(int i=0;i<v.size();i++)
          {
              cnt[v[i]]++;
              mx=max(cnt[v[i]],mx);
          }
          
          vector<int>vv;
          for(int i=0;i<v.size();i++)
          {
              if(cnt[v[i]]==mx)
              {
              cnt[v[i]]=0;
              vv.push_back(v[i]);
              }
          }
          
              
          return vv;
          
        
    }
};
