class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        vector<int>res;
        for( int i=0;i<n.size();i++){
            if( n[i]%2==0) res.push_back(n[i]);
        }
        for( int i=0;i<n.size();i++){
            if( n[i]%2==1) res.push_back(n[i]);
        }
        
        return res;
    }
};