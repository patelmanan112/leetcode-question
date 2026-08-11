class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* target = head;
        ListNode* first = new ListNode(0);
        ListNode* second = new ListNode(0);
        ListNode* firstHead = first;
        ListNode* secHead = second;
        while (target != nullptr) {

            if (target->val < x) {
                first->next = target;
                first = first->next;
            }
            else {
                second->next = target;
                second = second->next;
            }
            target = target->next;
        }
        second->next = nullptr;
        first->next = secHead->next;
        return firstHead->next;
    }
};