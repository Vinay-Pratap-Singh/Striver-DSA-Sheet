class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        if(head == NULL){
            return NULL;
        }
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast-> next -> next;
            slow = slow -> next;
            
            if(fast == slow){
                break;
            }
        }
        
        if(fast == NULL || fast -> next == NULL){
            return NULL;
        }
        
        fast = head;
        while(fast != slow){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        return slow;
        
    }
};