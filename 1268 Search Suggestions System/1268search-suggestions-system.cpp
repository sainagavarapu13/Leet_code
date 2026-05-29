struct Node{
    Node* next[26];
    bool end;
    Node(){
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
        end=false;
    }
};
class Solution {
public:
    Node* node = new Node();
    Node* insert(Node* node,char s){
        Node* temp=node;
        
            int idx=s-'a';
            if(temp->next[idx]==NULL){
                temp->next[idx]=new Node();
            }
            temp=temp->next[idx];
        
        temp->end=true;
        return temp;
    }
    bool check(string s,Node* node,int len){
        Node* temp=node;
        for(int i=0;i<len;i++){
            
            int idx=s[i]-'a';
          
            if(temp->next[idx]==NULL){
                return false;
            }
            temp=temp->next[idx];
             
        }
        return true;
    }
    vector<vector<string>> suggestedProducts(vector<string>& a, string b) {
        sort(a.begin(),a.end());
        int n=b.size();
        Node* temp=node;
        vector<vector<string>>ans(n);
        for(int i=0;i<b.size();i++){
            temp = insert(temp,b[i]);
            for(int j=0;j<a.size();j++){
                if(a[j].size()>=i+1&&check(a[j],node,i+1)){
                    ans[i].push_back(a[j]);
                    if(ans[i].size()==3) break;
                }
            }
        }
        return ans;
    }
};