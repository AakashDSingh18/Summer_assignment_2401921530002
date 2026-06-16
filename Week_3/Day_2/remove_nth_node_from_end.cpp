class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        while(head==NULL)return head;
        ListNode* slow= head;
        ListNode* fast= head;
        while(n){
            if(fast->next==NULL && n>0){
                head=head->next;
                return head;
            }
            fast=fast->next,n--;
        } 
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};