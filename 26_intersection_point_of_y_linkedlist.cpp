class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /*ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        while(temp1 != NULL){
            while(temp2 != NULL){
                if(temp1 == temp2){
                    return temp1;
                }
                temp2 = temp2 -> next;
            }
            temp1 = temp1 -> next;
            temp2 = headB;
        }
        return NULL;*/
        
    ListNode *first=headA;
    ListNode *second=headB;
    while(first!=second){
        if(first==NULL)
            first=headB;
        else
            first=first->next;
        if(second==NULL)
            second=headA;
        else
            second=second->next;
    }
    if(first==NULL)
        return NULL;
    else
        return first;
    }
};