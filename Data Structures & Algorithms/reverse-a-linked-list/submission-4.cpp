class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* curNode = head;
        ListNode* newHead = NULL;
        while (curNode != NULL) {
            ListNode* newNode = new ListNode(curNode->val);
            newNode->next = newHead;
            newHead = newNode;
            curNode = curNode->next;
        }
        return newHead;
    }
};
