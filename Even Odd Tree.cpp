class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {

        queue<TreeNode*>q;
        q.push(root);

        bool check=true;

        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans;

            for(int i=0;i<size;i++)
            {
               TreeNode*temp=q.front();
               q.pop();
               
               ans.push_back(temp->val);

               if(temp->left)
               q.push(temp->left);

               if(temp->right)
               q.push(temp->right);

            }
           
           if(check)
           {
               if(size==1)
               {
                   if(ans[0]%2==0)
                   return 0;
               }
               else
               {
               for(int i=0;i<ans.size()-1;i++)
               {
                   if(ans[i]%2==0 || ans[i+1]%2==0 || ans[i]>=ans[i+1])
                   return 0;
               }
               }
           }

           else
           {
               if(size==1)
               {
                   if(ans[0]%2!=0)
                   return 0;
               }
               else
               {
               for(int i=0;i<ans.size()-1;i++)
               {
                   if(ans[i]%2!=0 || ans[i+1]%2!=0 || ans[i]<=ans[i+1])
                   return 0;
               }
               }
           }

           check=!check;

        }

        return 1;
        
    }
};