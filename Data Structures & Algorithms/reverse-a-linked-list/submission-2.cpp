class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* curNode = head;
        ListNode* newHead;
        ListNode* preNode = NULL;
        while (curNode != NULL) {
            ListNode* newNode = new ListNode(curNode->val);
            newHead = newNode;
            newHead->next = preNode;
            preNode = newNode;
            curNode = curNode->next;
        }
        return newHead;
    }
};
