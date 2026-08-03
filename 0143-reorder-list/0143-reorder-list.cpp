class Solution {
public:
    void reorderList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = NULL;

        ListNode* temp = second;
        ListNode* ans = NULL;
        ListNode* pre = NULL;

        while (temp != NULL) {
            pre = temp->next;
            temp->next = ans;
            ans = temp;
            temp = pre;
        }

        ListNode* first = head;
        second = ans;

        while (second != NULL) {
            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }

        return;
    }
};