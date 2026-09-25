class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curNode = slow->next;
        ListNode* preNode = NULL;
        slow->next = NULL;
        while (curNode != NULL) {
            ListNode* nextNode = curNode->next;
            curNode->next = preNode;
            preNode = curNode;
            curNode = nextNode;
        }
        ListNode* tail = head;
        while (preNode != NULL) {
            ListNode* temp1 = tail->next;
            ListNode* temp2 = preNode->next;
            tail->next = preNode;
            preNode->next = temp1;
            tail = temp1;
            preNode = temp2;
        }
    }
};
