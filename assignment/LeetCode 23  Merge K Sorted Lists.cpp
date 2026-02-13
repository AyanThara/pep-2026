class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Min heap
        priority_queue<
            ListNode*,
            vector<ListNode*>,
            function<bool(ListNode*, ListNode*)>
        > pq([](ListNode* a, ListNode* b) {
            return a->val > b->val;
        });
        // Push first node of each list
        for(ListNode* node : lists) {
            if(node != nullptr) {
                pq.push(node);
            }
        }
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(!pq.empty()) {
            ListNode* smallest = pq.top();
            pq.pop();
            tail->next = smallest;
            tail = tail->next;
            if(smallest->next != nullptr) {
                pq.push(smallest->next);
            }
        }
        return dummy.next;
    }
};
