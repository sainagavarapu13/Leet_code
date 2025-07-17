class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& n) {
        vector<int>eve;
        vector<int>odd;
        for( int i=0;i<n.size();i++){
            if( n[i]%2==0) eve.push_back(n[i]);
            else odd.push_back(n[i]);
        }
       int e=0,o=0;
       for( int i=0;i<n.size();i++){
        if( i%2==0) n[i]=eve[e++];
        else n[i]=odd[o++];
       }
        return n;
    }
};