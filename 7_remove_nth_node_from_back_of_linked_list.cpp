    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        
        ListNode* temp = head, *prev = NULL;
        int length = 0;
        
        while(temp != NULL){
            length++;
            temp = temp -> next;
        }
        
        int index = 0, nodeToBeDeleted = length - n;
        temp = head;
        
        while(temp != NULL){
            if(index == nodeToBeDeleted){
                if(prev == NULL){
                    head = temp -> next;
                    return head;
                }
                else{
                    prev -> next = temp -> next;
                }
            }
            else{
                prev = temp;
            }
            
            temp = temp -> next;
            index++;
        }
        
        return head;
    }