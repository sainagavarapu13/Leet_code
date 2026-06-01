class MyHashSet {
public:
vector<int>a;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key)){
            a.push_back(key);
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            for(int i=0;i<a.size();i++){
                if(a[i]==key){
                     a.erase(a.begin()+i);
                }
            }
           
        }
    }
    
    bool contains(int key) {
         for(int i=0;i<a.size();i++){
                if(a[i]==key){
                     return true;
                }
            }
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */