class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = 0;

        ListNode* curr = head;

        // Find length
        while (curr != NULL) {
            len++;
            curr = curr->next;
        }

        int pos = len - n;

        // Remove head
        if (pos == 0) {
            return head->next;
        }

        // Move to node before the node to remove
        curr = head;

        for (int i = 0; i < pos - 1; i++) {
            curr = curr->next;
        }

        // Remove node
        curr->next = curr->next->next;

        return head;
    }
};