class Solution {  
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       /*
        if(list1 == NULL){
            return list2;
        }
        
        if(list2 == NULL){
            return list1;
        }
        
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        
        while(head1 != NULL && head2 != NULL){
            if(head1 -> val <= head2 -> val){
                ListNode* newnode = new ListNode(head1 -> val);
                temp -> next = newnode;
                temp = temp -> next;
                head1 = head1 -> next;
            }
            else{
                ListNode* newnode = new ListNode(head2 -> val);
                temp -> next = newnode;
                temp = temp -> next;
                head2 = head2 -> next;
            }
        }
        
        while(head1 != NULL){
            ListNode* newnode = new ListNode(head1 -> val);
            temp -> next = newnode;
            temp = temp -> next;
            head1 = head1 -> next;
        }
        
        while(head2 != NULL){
            ListNode* newnode = new ListNode(head2 -> val);
            temp -> next = newnode;
            temp = temp -> next;
            head2 = head2 -> next;
        }
        
        ans = ans -> next;
        return ans;
        */
        
        // Second Solution
		if(list1 == NULL)
        {
			return list2;
		}
		
		if(list2 == NULL)
        {
			return list1;
		} 
		
		if(list1 -> val <= list2 -> val)
        {
			list1 -> next = mergeTwoLists(list1 -> next, list2);
			return list1;
		}
		else
        {
			list2 -> next = mergeTwoLists(list1, list2 -> next);
			return list2;            
		}
    }
};