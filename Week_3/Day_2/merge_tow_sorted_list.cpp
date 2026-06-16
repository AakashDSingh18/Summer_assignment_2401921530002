class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        ListNode* newHead= new ListNode();
        ListNode* newlist= newHead;
        while(temp1!=NULL && temp2!=NULL){
            if(temp2->val > temp1->val){
                newlist->next= temp1;
                newlist=newlist->next;
                temp1= temp1->next;
            }else{
                newlist->next= temp2;
                newlist=newlist->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            newlist->next= temp1;
            newlist=newlist->next;
            temp1= temp1->next;
        }
        while(temp2!=NULL){
            newlist->next= temp2;
            newlist=newlist->next;
            temp2=temp2->next;
        }
        newlist->next=NULL;
        return newHead->next;
    }
};