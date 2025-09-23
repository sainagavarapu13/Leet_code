class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& a, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        for( int i=0;i<l.size();i++){
            vector<int>k(a.begin()+l[i],a.begin()+r[i]+1);
            sort(k.begin(),k.end());
            bool ok = true;
            int diff = k[1]-k[0];
            for(int j =2;j<k.size();j++){
                if( k[j]-k[j-1]!=diff){
                    ok = false;
                    break;
                }
            }
            res.push_back(ok);
            
        }
        
        
        return res;
    }
};