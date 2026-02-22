class Solution {
public:
    int fun(vector<int>& a){
        vector<int>res;

        for( int x:a){
            if( res.empty() || res.back()<x){
                res.push_back(x);
                continue;
            }

            auto it = lower_bound(res.begin(), res.end(), x);
            *it = x;
        }
        return res.size();
    }

    int longestSubsequence(vector<int>& a) {
        int ans=0;

        for( int m=0;m<31;m++){
            vector<int>temp;

            for( int x:a){
                if( x&(1<<m)){
                    temp.push_back(x);
                }
            }

            ans = max( ans, fun( temp));
        }
        return ans;
    }
};