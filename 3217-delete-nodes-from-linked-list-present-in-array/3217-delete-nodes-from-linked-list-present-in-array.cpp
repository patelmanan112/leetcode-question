class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int , int> freq;
        for(auto& it : nums){
            freq[it]++;
        }
        ListNode* current = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        while(current != nullptr){
         if(freq[current->val]){
            prev->next = current->next;
            current = current->next;

         }
         else{
            prev = current;
            current = current->next;
         }
        }
        return dummy->next;
    }
};
