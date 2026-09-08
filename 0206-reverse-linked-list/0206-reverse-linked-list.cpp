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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        // ListNode* next1 = nullptr;
        // while (head) {
        //     prev = head;
        //     head = head->next;
        //     if (next1 == nullptr) {
        //         next1 = prev;
        //         next1->next = nullptr;
        //     } else {
        //         prev->next = next1;
        //         next1 = prev;
        //     }
        // }
        // return next1;

      ListNode* address = nullptr;
      ListNode* i = head;
      while(i != nullptr){
        ListNode* temp = i->next; // 4 
        i->next = address; // 3 
        address = i; // 2-> 3 
        i = temp; // 4 
      }
      return address;
    }
};

  // ListNode* temp = head;
        // ListNode* pre = NULL;

        // while(temp!= NULL){
        //  pre = temp->next;
        //  temp->next = ans;
        //  ans = temp;
        //  temp = pre;
        // }
        // return ans;