class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // if (head == nullptr || head->next == nullptr)
        //     return head;

        // ListNode* odd = head;
        // ListNode* even = head->next;
        // ListNode* evenHead = even;

        // while (even != nullptr && even->next != nullptr) {
        //     odd->next = even->next;
        //     odd = odd->next;

        //     even->next = odd->next;
        //     even = even->next;
        // }

        // odd->next = evenHead;
        // return head;

// Second Logic 
        // if(head == nullptr || head->next == nullptr){
        //     return head;
        // }

        // ListNode* slow = head;
        // ListNode* fast = head->next;

        // while(fast != nullptr && fast->next != nullptr){
        //     ListNode* curr = slow->next;
        //     ListNode* nex = fast->next;
        //     slow->next = nex;
        //     fast->next = curr;
        //     slow = slow->next;
        //     fast = fast->next;
        // }
        // return head;


        if(head == nullptr || head->next == nullptr){
            return head;

        }
        ListNode* i = head;
        ListNode* j = head->next;
        ListNode* temp = j;

        while(j != nullptr && j->next != nullptr){
            i->next = i->next->next;
            i = i->next;
            j->next = j->next->next;
            j = j->next;

        }
        i->next = temp;
        if(j !=nullptr){
            j->next = nullptr;
        }
        return head;
    }
};