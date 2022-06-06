    bool isPalindrome(ListNode* head) {
        vector<int>list;
        ListNode* temp = head;
        while(temp != NULL){
            int data = temp -> val;
            temp = temp -> next;
            list.push_back(data);
        }
        
        int start = 0, end = list.size()-1;
        while(start <= end){
            if(list[start] != list[end]){
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }