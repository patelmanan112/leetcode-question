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
    ListNode* middleNode(ListNode* head) {
        // ListNode* fast = head;
        // ListNode* slow = head;
        // while(fast !=nullptr && fast->next != nullptr){
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }

        // return slow;
    ListNode* temp = head;
    int count =0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        int k =0;
        int even = (count/2);
        temp = head;
        while(temp != nullptr){
            if(k< even){
                temp = temp->next;
                k++;
            }
            else{
                return temp;
            }
        }
        return temp;
    }
};