class Solution {
public:
    int isbala(vector<int> &a){
   
        int k=0;
        for(auto& i:a){
            if(i==0) continue;
            if(k!=0) {
                if(k!=i) return 0;
            }
            k=i;
        }
        return 1;
    }
    int longestBalanced(string s) {
       int n=s.size();
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                if(isbala(freq)){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};