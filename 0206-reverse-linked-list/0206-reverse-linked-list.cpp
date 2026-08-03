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
        ListNode* ans = NULL;
        ListNode* temp = head;
        ListNode* pre = NULL;

        while(temp!= NULL){
         pre = temp->next;
         temp->next = ans;
         ans = temp;
         temp = pre;
        }
        return ans;
    }
};