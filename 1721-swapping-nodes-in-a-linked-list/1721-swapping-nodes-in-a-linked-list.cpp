class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        int count = 0;
        int value1;
        ListNode* current = head;
        ListNode* first = nullptr;
        while (current != nullptr) {
            count++;
            if (count == k) {
                first = current;
                value1 = current->val;
            }
            current = current->next;
        }
        int position = count - k + 1;
      current = head;
        for (int i = 1; i < position; i++) {
            current = current->next;
        }

        first->val = current->val;
        current->val = value1;

        return head;
    }
};