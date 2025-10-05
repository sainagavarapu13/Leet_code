class Solution {
public:
    int longestSubsequence(vector<int>& a) {
        int i,x=0;
        for(i=0;i<a.size();i++){
            x=x^a[i];
        }
        if(x!=0) return a.size();
       for(auto&i: a) if(i!=0) return a.size()-1;
        return 0;
    }
};