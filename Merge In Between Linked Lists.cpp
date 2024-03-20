class Solution {
    int length1(ListNode*temp1)
    {
        int count=0;
        while(temp1!=NULL)
        {
            count++;
            temp1=temp1->next;
        }
        return count;
    }
     int length2(ListNode*temp2)
    {
        int count=0;
        while(temp2!=NULL)
        {
            count++;
            temp2=temp2->next;
        }
        return count;
    }
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        int k=length1(list1);
        int l=length2(list2);

        ListNode*curr1=list1;
        ListNode*temp1=list1;

        ListNode*curr2=list2;
        ListNode*temp2=list2;

        while(a!=1)
        {
            curr1=curr1->next;
            a--;
        }

        while(b!=0)
        {
            temp1=temp1->next;
            b--;
        }
        temp1=temp1->next;

        while(l!=1)
        {
            temp2=temp2->next;
            l--;
        }

        curr1->next=curr2;
        temp2->next=temp1;

        return list1;
        
    }
};
