class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) return NULL;
        ListNode* curr = head;
        int count = 0;
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        } if (count < k) return head;
        curr = head;
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;
        count = 0;
        while (curr != NULL && count < k) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }
        head->next = reverseKGroup(curr, k);
        return prev; 
    }
};
