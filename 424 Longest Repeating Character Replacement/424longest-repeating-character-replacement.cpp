class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0,end=0,cnt=0,ans=0;
        int max_freq = 0;
        char ch;
        vector<int>freq(26,0);
        while(end<s.size()){
            freq[s[end]-'A']++;
          
            if(max_freq< freq[s[end]-'A']){
                max_freq = freq[s[end]-'A'];
                
            }
            int len = end-start+1;
           
            while(len-max_freq > k){
                freq[s[start]-'A']--;
                start++;
                len = end-start+1;
            }
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};