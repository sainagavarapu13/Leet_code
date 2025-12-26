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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
          vector<vector<int>> v(m,vector<int> (n,-1));
        int a = n-1,b = m-1,c=0,d=0;
        //a = right,b = bottom,c = left,d = top
        while(head!=NULL && c<=a && d<=b){
            for(int i=c;i<=a;i++){
                v[d][i] = head->val;
                head = head->next;
                if(head==NULL) break;
            }
            if(head==NULL) break;
            d++;
            for(int j=d;j<=b;j++){
                v[j][a] = head->val;
                head = head->next;
                if(head==NULL) break;
            }
            a--;
            if(head==NULL) break;
            if(d<=b){
                for(int i=a;i>=c;i--){
                    v[b][i] = head->val;
                    head = head->next;
                    if(head==NULL) break;
                }
                b--;
            }
            if(head==NULL) break;
            if(c<=a){
                for(int i=b;i>=d;i--){
                    v[i][c] = head->val;
                    head = head->next;
                    if(head==NULL) break;
                }
                c++;
            }
        }
        return v;
        
    }
};