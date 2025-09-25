class Solution {
public:
    bool canBeIncreasing(vector<int>& n) {
        for( int i=0;i<n.size();i++){
            vector<int>b(n.begin(),n.end());
            b.erase(b.begin()+i);
            bool f = true;
            for( int i=0;i<b.size()-1;i++){
                if(b[i] > b[i+1] || b[i]==b[i+1]){
                    f=false;
                    break;
                }
            }
            if( f) return 1;
            
        }
        return 0;
    }
};