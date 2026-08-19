class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* next1 = nullptr;
        while (head) {
            next1 = head->next;
            head->next = prev;
            prev = head;
            head = next1;
        }
        return prev;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        int group = 1;
        ListNode* ans = new ListNode(0);
        ListNode* ansHead = ans;
        while (curr) {
            ListNode* mann = curr;
            count = 0;
            while (curr && count < group) {
                curr = curr->next;
                count++;
            }
            ListNode* currNext = curr;
            ListNode* temp = mann;
            while (temp->next != currNext) {
                temp = temp->next;
            }
            if (count % 2 == 0) {
                temp->next = nullptr;
                ListNode* reversed = reverse(mann);
                ans->next = reversed;
                while (ans->next) {
                    ans = ans->next;
                }
                ans->next = currNext;
            } else {
                ans->next = mann;
                while (ans->next != currNext) {
                    ans = ans->next;
                }
            }
            group++;
        }
        return ansHead->next;
    }
};