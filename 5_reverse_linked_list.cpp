    ListNode* reverseList(ListNode* head) {
        /*vector<int>list;
        ListNode* temp = head;
        
        while(temp != NULL){
            int data = temp -> val;
            list.push_back(data);
            temp = temp -> next;
        }
        
        int index = list.size() - 1;
        
        temp = head;
        while( temp != NULL ){
            temp -> val = list[index];
            index--;
            temp = temp -> next;
        }
        
        return head;*/
        
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* current = head;
        while( current != NULL){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }