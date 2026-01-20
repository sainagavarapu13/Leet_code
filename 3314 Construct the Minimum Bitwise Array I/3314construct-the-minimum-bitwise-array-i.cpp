class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& a) {
        vector<int>b;
        for( int i : a){
            int val = i;
            int j =1;
            bool found = false;
            while( j<val ){
                if(((j+1)|j) == val){
                    found = true;
                    break;
                }
                j++;
            }
            if( found) b.push_back(j);
            else b.push_back(-1);
        }
        return b;
    }
};