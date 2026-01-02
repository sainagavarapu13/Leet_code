class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int a, int b) {
        if (!head || a == b) return head;

        ListNode *left = nullptr;
        ListNode *right = nullptr;
        ListNode *temp = head;

       for( int i=1;i<a;i++) {
            temp = temp->next;
        }
        left = temp;

       for( int i=a;i<b;i++){
         temp = temp->next;
       }
       right = temp;

        if (!left || !right) return head;

        ListNode *dum = left;
        ListNode *h = left->next;

        dum->next = right->next;

        while (h != right) {
            ListNode *nextNode = h->next;
            h->next = dum;
            dum = h;
            h = nextNode;
        }

        right->next = dum;
        dum = right;

        if (head == left) return dum;

        temp = head;
        while (temp->next != left) {
            temp = temp->next;
        }
        temp->next = dum;

        return head;
    }
};
