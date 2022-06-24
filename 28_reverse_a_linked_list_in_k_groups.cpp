// codestudio solution
#include<vector>
    void reverse(vector<int>&arr, int start, int end){
        while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
        vector<int>arr;
        Node* temp = head;
        int length = 0;
        while(temp != NULL){
            arr.push_back(temp -> data);
            temp = temp -> next;
            length++;
        }
        
        int start = 0, end = 0;
        for(int i=0; i<n; i++){
            end = end+b[i];
            if(end > length){
                end = length;
            }
            reverse(arr, start, end-1);
            start += b[i];
        }
        
        int index = 0;
        temp = head;
        while(temp != NULL){
            temp -> data = arr[index];
            index++;
            temp = temp -> next;
        }
        
        return head;
}

// leetcode solution
class Solution {
private:
    void reverse(vector<int>&arr, int start, int end){
        while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        
        int start = 0, end = k-1;
        int counter = arr.size() / k;
        while(counter > 0){
            reverse(arr, start, end);
            counter--;
            start += k;
            end += k;
        }
        
        int index = 0;
        temp = head;
        while(temp != NULL){
            temp -> val = arr[index];
            index++;
            temp = temp -> next;
        }
        
        return head;
    }
};