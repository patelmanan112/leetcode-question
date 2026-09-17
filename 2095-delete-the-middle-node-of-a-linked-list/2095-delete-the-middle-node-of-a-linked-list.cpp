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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode* i = head;
        ListNode* j = head;
        
        while(j->next->next != nullptr && j->next->next->next!= nullptr){
            i = i->next;
            j = j->next->next;
        }
        i -> next = i -> next -> next;
        return head;

    }
};