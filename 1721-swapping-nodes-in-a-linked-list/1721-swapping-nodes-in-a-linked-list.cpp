/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
  
        int count =0;
        int value1;
        ListNode* current = head;
        ListNode* first = nullptr;
        while(current != nullptr){
            count++;
            if(count == k){
                value1 = current->val;
                first = current;
            }
            current =current->next;
        }
        int iter = count - k +1;
        current = head;
        for(int i = 1; i<iter; i++){
            current = current->next;
        }
        first->val = current->val;
        current->val = value1;

        return head;
    }
};
