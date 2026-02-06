class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;
        // find length
        int len = 1;
        ListNode* tail = head;
        while (tail->next != NULL) {
            tail = tail->next;
            len++;
        }
        // make it circular
        tail->next = head;
        // handle large k
        k = k % len;
        int steps = len - k;
        // move to new tail
        while (steps--) {
            tail = tail->next;
        }
        // break the circle
        head = tail->next;
        tail->next = NULL;
        return head;
    }
};
