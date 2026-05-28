class MapSum {
public:
    unordered_map<char , MapSum*>t;
    unordered_map<string , int>mp;
    int val=0;
    bool end = 0;
    MapSum() {
        
    }
    
    void insert(string key, int b) {
          int diff = b;

        if (mp.count(key)) {
            diff -= mp[key];
        }

        mp[key] = b;
        MapSum* root = this;
        for(char i : key){
            if( root->t[i]==NULL){
                root->t[i] = new MapSum();
            }
            root = root->t[i];
             root->val+=diff;
        }
       
        root->end = true;
    }
    
    int sum(string p) {
         MapSum* root = this;
         int ans=0;
            for(char i=0;i<p.size();i++){
           if( root->t[p[i]]==NULL) return ans;
           //ans = root->val;
            if(i<p.size())root = root->t[p[i]];
        }
        return root->val;

    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */