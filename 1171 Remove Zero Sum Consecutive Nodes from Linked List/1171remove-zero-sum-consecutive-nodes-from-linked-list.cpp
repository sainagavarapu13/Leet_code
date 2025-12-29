class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> a;
        ListNode* temp = head;
        while (temp) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        bool f= true;
        while (f) {
            f = false;
            for (int i =0;i<a.size();i++) {
                int sum = 0;
                for (int j=i;j< a.size();j++) {
                    sum += a[j];
                    if (sum == 0) {
                        a.erase(a.begin()+i,a.begin()+ j + 1);
                        f = true;
                        break;
                    }
                }
                if (f) break;
            }
        }
        if (a.empty()) return nullptr;
        ListNode* h = new ListNode(a[0]);
        ListNode* curr = h;

        for (int i = 1; i < a.size(); i++) {
            curr->next = new ListNode(a[i]);
            curr = curr->next;
        }

        return h;
    }
};
