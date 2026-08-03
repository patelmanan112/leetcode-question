class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if(count == n){
            ListNode* node = head;
            head = head->next;
            delete node;
            return head;
        }
        temp = head;
        int steps = count - n - 1;
        while(steps--){
            temp = temp->next;
        }
        ListNode* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        return head;
    }
};