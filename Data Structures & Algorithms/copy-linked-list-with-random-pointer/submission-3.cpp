
class Solution {
public:
 Node* copyRandomList(Node* head) {
    if(head == NULL) return NULL;
    for(Node* cur = head; cur; ) {
        Node* copy = new Node(cur->val);
        copy->next = cur->next;
        cur->next = copy;
        cur = copy->next;
    }
    for(Node* cur = head; cur; cur = cur->next->next) {
        if (cur->random){
            cur->next->random = cur->random->next;
        }
    }
    Node* newHead = head->next;
    for(Node* cur = head; cur; ) {
        Node* copy = cur->next;
        cur->next = copy->next;
        copy->next = cur->next ? cur->next->next : NULL;
        cur = cur->next;
    }
    return newHead;
 }
};
