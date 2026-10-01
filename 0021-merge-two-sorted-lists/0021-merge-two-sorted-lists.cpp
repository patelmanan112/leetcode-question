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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first = list1;
        ListNode* second= list2;
    ListNode* temp = new ListNode();
    ListNode* ans = temp;
        while(first && second){
            if(first->val > second->val){
                temp->next = second;
                second = second->next;
            }
            else{
                temp->next = first;
                first = first->next;
            }
            temp = temp->next;
        }

        if(first == nullptr){
            temp->next = second;
        }
        else if(second == nullptr){
            temp->next = first;
        }

        return ans->next;
    }
};