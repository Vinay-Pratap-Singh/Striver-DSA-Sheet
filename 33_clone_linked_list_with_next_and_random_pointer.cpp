
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        /*unordered_map<Node*, Node*>mp;
        if(head == NULL){
            return head;
        }
        
        Node* temp = head;
        while(temp){
            mp[temp] = new Node(temp -> val);
            temp = temp -> next;
        }
        
        temp = head;
        while(temp){
            mp[temp] -> next = mp[temp -> next];
            mp[temp] -> random = mp[temp -> random];
            temp = temp -> next;
        }
        
        return mp[head];*/
        
        // Second Approach
        if(head == NULL){
            return head;
        }
        Node* temp = head;
        while(temp != NULL){
            Node* newnode = new Node(temp -> val);
            newnode -> next = temp -> next;
            temp -> next = newnode;
            temp = newnode -> next;
        }
        
        temp = head;
        while(temp != NULL){ 
            if(temp -> random == NULL){
                temp -> next -> random = NULL;
            }
            else{
                temp -> next -> random = temp -> random -> next;
            }
            temp = temp -> next -> next;
        }
        
        Node* main = head;
        temp = head;
        Node* ans = head -> next;
        Node* temp2 = ans;
        
        while(temp != NULL){
            temp -> next = temp2 -> next;
            temp = temp -> next;
            if(temp2 -> next == NULL){
                temp2 -> next = NULL;
            }
            else{
                temp2 -> next = temp2 -> next -> next;
            }
            temp2 = temp2 -> next;
        }
        return ans;
    }
};