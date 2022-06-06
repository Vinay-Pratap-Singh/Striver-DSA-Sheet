    ListNode* middleNode(ListNode* head) {
        /*ListNode* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp -> next;
        }
        
        int count = size/2;
        int start = 0;
        
        temp = head;
        while( start < count){
            temp = temp -> next;
            start ++;
        }
        head = temp;
        return head;*/
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow;
    }