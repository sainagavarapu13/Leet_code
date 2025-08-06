class Solution {
public:
    int minimumOperations(vector<int>& n) {
       set<int>a;
       for( int i :n){
        if( i !=0){
            a.insert(i);
        }
       }
        return a.size();
        
    }
};