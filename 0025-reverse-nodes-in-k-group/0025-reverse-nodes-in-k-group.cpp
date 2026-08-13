class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1) {
            return head;
        }

        ListNode* curr = head;
        ListNode* prevGroup = nullptr;
        ListNode* newHead = nullptr;

        while (curr != nullptr) {

            ListNode* group = curr;
            for (int i = 1; i < k && group != nullptr; i++) {
                group = group->next;
            }
            if (group == nullptr) {
                break;
            }
            ListNode* nextGroup = group->next;
            group->next = nullptr;
            ListNode* reversed = reverse(curr);
            if (newHead == nullptr) {
                newHead = reversed;
            }
            if (prevGroup != nullptr) {
                prevGroup->next = reversed;
            }
            prevGroup = curr;
            curr = nextGroup;
        }
        if (prevGroup != nullptr) {
            prevGroup->next = curr;
        }

        return newHead;
    }
};