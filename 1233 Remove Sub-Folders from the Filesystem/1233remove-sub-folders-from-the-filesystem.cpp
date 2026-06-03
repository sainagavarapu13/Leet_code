struct Node{
    Node* next[27];
    bool end;
    Node(){
        for(int i=0;i<27;i++){
            next[i]=NULL;
        }
        end=false;
    }
};
class Solution {
public:
    Node* node;
    bool insert(Node* node , string a){
        Node* t=node;
        for(int i=0;i<a.size();i++){
            
            int idx;
            if(a[i]=='/') idx=26;
            else idx=a[i]-'a';
            if(t->end==true&&a[i]=='/'){
                return false;
            }
            else{
                if(t->next[idx]==NULL){
                    t->next[idx]=new Node();
                }
            }
            t=t->next[idx];
        }
        t->end=true;
        return true;
    }
    vector<string> removeSubfolders(vector<string>& a) {
         vector<string>ans;
        node=new Node();
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(insert(node,a[i])) ans.push_back(a[i]);
        }
        return ans;
    }
};