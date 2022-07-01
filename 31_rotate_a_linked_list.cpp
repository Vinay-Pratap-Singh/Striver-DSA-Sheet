class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL || k == 0){
            return head;
        }
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            length++;
        }
        
        if(k >= length){
            k = k % length;
        }
        if(k == 0){
            return head;
        }
        
        temp = head;
        for(int i=1; i<length-k; i++){
            temp = temp -> next;
        }
        
        ListNode* newhead = temp -> next;
        temp -> next = NULL;
        temp = newhead;

        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = head;
        head = newhead;
        
        return head;
    }
};