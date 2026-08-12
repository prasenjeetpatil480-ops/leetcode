class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int len = 0;
        ListNode* curr = head;

        // Find length
        while (curr != NULL) {
            len++;
            curr = curr->next;
        }

        // Find middle index
        int mid = len / 2;

        curr = head;

        // Move to middle
        for (int i = 0; i < mid; i++) {
            curr = curr->next;
        }

        return curr;
    }
};