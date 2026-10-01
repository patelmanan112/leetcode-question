// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         // ListNode* temp = head;
//         // ListNode* prev = nullptr;
//         // while (temp && temp->next != nullptr) {
//         //     if (temp->val == temp->next->val) {
//         //         ListNode* toDele = temp;
//         //         ListNode* toDele1 = temp->next;
//         //         prev->next = temp->next->next;
//         //         temp = prev->next;
//         //         delete toDele;
//         //         delete toDele1;
//         //         continue;
//         //     }
//         //     prev = temp;
//         //     temp = temp->next;
//         // }
//         // return head;

//         ListNode* curr = new ListNode();
//         ListNode* temp = curr;
//         ListNode* check = head;
//         bool check = false;
//         while(head){
//             if(head->val == head->next->val){
//                 head = head->next;
//                 check = true;
//             }
//             else{
          
//             }
//         }
//     }
// };



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* i = head;
        ListNode* j = head -> next;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(j != nullptr){
            if(i->val == j->val){
                j = j->next;
            }
            else{
                if(i->val == i->next->val){
                    i = j;
                    j = j->next;
                }
                else{
                    dummy->next = i;
                    i = i->next;
                    j = j->next;
                    dummy = dummy->next;
                }
            }
        }
        if(i->next == nullptr){
            dummy->next = i;
            dummy = dummy->next;
        }
        dummy->next = nullptr;
        return temp->next;
    }
};