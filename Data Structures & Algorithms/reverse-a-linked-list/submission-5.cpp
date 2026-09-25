class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* preNode = NULL;
        ListNode* curNode = head;
        ListNode* nextNode;
        while (curNode != NULL) {
            nextNode = curNode->next;
            curNode->next = preNode;
            preNode = curNode;
            curNode = nextNode;
        }
        return preNode;
    }
};
