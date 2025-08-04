class Solution {
public:
    int minDeletion(string s, int k) {
       vector<int>f(26);
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
       vector<int> freqs;
        for (int i = 0; i < 26; i++) {
            if (f[i] > 0) {
                freqs.push_back(f[i]);
            }
        }
        if (freqs.size() <= k) {
            return 0;
        }
         sort(freqs.begin(), freqs.end());
        int  deletions=0;
         for (int i = 0; i < freqs.size() - k; i++) {
            deletions += freqs[i]; 
         }

        return deletions;
    }
};