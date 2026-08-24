/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode* , int> freq;
        ListNode* curr= head;

        while(curr){
            freq[curr]++;
            if(freq[curr] > 1){
                return curr;
            }
            curr = curr->next;
        }
        return nullptr;
    }
};