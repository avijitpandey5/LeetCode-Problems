class Solution {

   bool check(vector<int>temp)
   {
       int n=temp.size();
       int i=0;
       int j=n-1;
       while(i<j)
       {
           if(temp[i]!=temp[j])
           {
               return 0;
           }
           i++;
           j--;
       }
       return 1;
   }

public:
    bool isPalindrome(ListNode* head) {

        vector<int>ans;

        ListNode*temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }

           return check(ans);
        
    }
};
