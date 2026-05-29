struct Node{
    Node* next[26];
    int sum;
    Node(){
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
        sum=0;
    }
};
class MapSum {
public:
Node* node=new Node();
unordered_map<string,int>m;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        Node* temp=node;
        int diff = val-m[key];
        m[key]=val;
        for(int i=0;i<key.size();i++){
            int idx=key[i]-'a';
            if(temp->next[idx]==NULL){
                temp->next[idx] = new Node();
            }
           
            temp=temp->next[idx];
             temp->sum+=diff;
        }
    }
    
    int sum(string p) {
        Node* temp=node;
        for(int i=0;i<p.size();i++){
            if(temp->next[p[i]-'a']==NULL){
                return 0;
            }
            temp=temp->next[p[i]-'a'];
        }
        return temp->sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */