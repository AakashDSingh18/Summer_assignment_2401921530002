class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* prev= slow;
        ListNode* curr= slow->next;
        while(curr != NULL){
            ListNode* front= curr->next;
            curr->next= prev;
            prev= curr;
            curr= front;
        }
        slow->next=NULL;
        ListNode* end= prev;
        fast= head;
        while(fast->next!=NULL){
            if(fast->val != end->val) return false;
            fast= fast->next;
            end= end->next;
        }
        return true;
    }
};