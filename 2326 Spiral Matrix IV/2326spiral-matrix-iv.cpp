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
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int i=0,j=0;
        int left=0,right=n-1,top=0,bottom=m-1;
        ListNode* temp=head;
        while(temp&&top<=bottom&&left<=right){
            i=top,j=left;
            while(j<=right&&temp){
            ans[i][j]=temp->val;
            temp=temp->next;
            j++;
        }
        top++;
        i=top;
        j = right;
        while(i<=bottom&&temp){
            ans[i][j]=temp->val;
            temp=temp->next;
            i++;
        }
        right--;
        i=bottom;
        j=right;
        while(j>=left&&temp){
            ans[i][j] = temp->val;
            temp=temp->next;
            j--;
        }
        bottom--;
        j=left;
        i=bottom;
        while(i>=top&&temp){
            ans[i][j]=temp->val;
            temp=temp->next;
            i--;
        }
        left++;
        }
        
        return ans;
    }
};