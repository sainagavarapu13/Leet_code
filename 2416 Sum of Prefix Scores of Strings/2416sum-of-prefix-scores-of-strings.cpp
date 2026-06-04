struct Node{
    Node* next[26];
    int cnt;
    Node(){
        for(int i=0;i<26;i++) next[i]=NULL;
        cnt=0;
    }
};
class Solution {
public:
    Node* node;
    void insert(Node* node,string s){
        Node* t=node;
        for(int i=0;i<s.size();i++){
            int idx = s[i]-'a';
            if(t->next[idx]==NULL){
                t->next[idx] = new Node();
            }
           
            t = t->next[idx];
            t->cnt++;
        }
    }
    vector<int> sumPrefixScores(vector<string>& a) {
        node=new Node();
        for(int i=0;i<a.size();i++){
            insert(node,a[i]);
        }
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int sum=0;
            Node* t=node;
            for(int j=0;j<a[i].size();j++){
                int idx=a[i][j]-'a';
                sum+=t->next[idx]->cnt;
                t=t->next[idx];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};