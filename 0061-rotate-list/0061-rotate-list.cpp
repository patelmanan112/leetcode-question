class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        int n = 1;
        ListNode* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
            n++;
        }
        k = k % n;
        if (k == 0) {
            return head;
        }
        curr->next = head;
        int steps = n - k - 1;
        curr = head;
        for (int i = 0; i < steps; i++) {
            curr = curr->next;
        }
        ListNode* newHead = curr->next;

        curr->next = nullptr;

        return newHead;
    }
};