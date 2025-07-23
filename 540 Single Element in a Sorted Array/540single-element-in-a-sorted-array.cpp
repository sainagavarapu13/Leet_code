class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        int ele ;
        if( n.size()==1) return n[0];
        for( int i=0;i<n.size();){
            if( i+1 < n.size() && n[i]==n[i+1]) i+=2;
            else{
                ele = n[i];
                break;
            }
        }
        return ele;
        
    }
};