class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prv = nullptr;
        while (curr != nullptr) {
            ListNode* nnext = curr->next;
            curr->next = prv;
            prv = curr;
            curr = nnext;
        }

        return prv;
    }

    ListNode* removeNodes(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* reversedList = reverse(head);
        ListNode* temp = reversedList;
        int check = temp->val;
        while (temp->next != nullptr) {
            if (temp->next->val >= check) {
                check = temp->next->val;
                temp = temp->next;
            }
            else {
                temp->next = temp->next->next;
            }
        }
        return reverse(reversedList);
    }
};