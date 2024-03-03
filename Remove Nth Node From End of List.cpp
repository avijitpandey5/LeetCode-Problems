class Solution {

    int getLength(ListNode*temp)
    {
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head==NULL || head->next==NULL)
         {
             return NULL;
         }
        int k=getLength(head);
        int p=k-n;
        ListNode*temp=head;

        if(p==0)
        {
            ListNode* aage=temp->next;
            temp->val=aage->val;
            temp->next=aage->next;
            aage->next=NULL;
            delete aage;
            return head;
        }
        while(p>1)
        {
            temp=temp->next;
            p--;
        }
        if(temp->next!=NULL)
        {
        ListNode*del=temp->next;
        temp->next=del->next;
        delete del;
        }

        return head;
        
    }
};