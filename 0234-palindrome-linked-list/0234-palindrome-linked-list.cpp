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
    bool isPalindrome(ListNode* head) {
    //     if(head->next == nullptr) {
    //         return true;
    //     }
    //     ListNode* slow = head;
    //     ListNode* fast = head;
    //     while(fast->next != nullptr && fast->next->next != nullptr){
    //         fast = fast->next->next;
    //         slow = slow->next;
    //     }
    //     ListNode* second = slow->next;
    // slow->next = nullptr;
    
    //  ListNode *curr = second, *prev = nullptr, *next;


    // while (curr != nullptr) {
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
    // second = prev;
    // ListNode* first = head;
    // while(second != nullptr){
    //     if(first->val != second->val){
    //         return false;
    //     }
    //     first = first->next;
    //     second = second->next;
    // }
    // return true;

    ListNode* i = head;
    ListNode* address = nullptr;
    while(i != nullptr){
        ListNode* n = new ListNode();
        n->next = address;
        address = n;
        n->val = i->val;
        i = i->next;
    }
    
    while( address != nullptr){
        if(address->val != head->val){
            return false;
        }
        head = head->next;
        address = address->next;
    }
    return true;
    }
};