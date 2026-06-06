class Solution {
public:
    int lengthOfLongestSubstring(string a) {
        vector<int>last(265,-1);
        int start = 0,end=0,ans=0;
        while(end<a.size()){
            while(last[a[end]]>=start){

                start++;
            }
            last[a[end]] = end;
            ans=max(ans,(end-start+1));
            end++;
        }
        return ans;
    }
};