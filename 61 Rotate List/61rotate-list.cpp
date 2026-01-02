/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0) return head;

        int cnt = 0;
        ListNode* temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }

        k = k % cnt;
        if (k == 0) return head;

        int size = cnt - k;

        temp = head;
        for (int i = 1; i < size; i++) {
            temp = temp->next;
        }

        ListNode* last = temp;
        ListNode* node = temp->next;

        temp = node;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = head;
        last->next = NULL;
        head = node;

        return head;
    }
};
