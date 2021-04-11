/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1,n2,carry=0,temp;
        ListNode *head=new ListNode(0), *res=head;
        while(l1||l2||carry)
        {
            if(l1){
                n1=l1->val;
                l1=l1->next;
            }
                
            else
                n1=0;
            
            if(l2)
            {
                n2=l2->val; 
                l2=l2->next;
            }
                
            else
                n2=0;
            
            temp=n1+n2+carry;
            res->next=new ListNode(temp%10);
            res=res->next;
            carry=temp/10;
            
            
        }
        return head->next;
    }
};