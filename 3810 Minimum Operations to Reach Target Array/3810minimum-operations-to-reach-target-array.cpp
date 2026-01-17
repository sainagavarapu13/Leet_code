class Solution {
public:
    int minOperations(vector<int>& a, vector<int>& b) {
        set<int>set;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
               set.insert(a[i]);
            }
        }
        return set.size();
        
    }
};