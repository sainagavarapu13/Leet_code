class Solution {
public:
    string mergeCharacters(string s, int k) {
        vector<int>last(26,-1);
        string ans;
        for(int i=0;i<s.size();i++){
            int idx=last[s[i]-'a'];
          //  cout<<idx<<" ";
            if(last[s[i]-'a']==-1){
                ans+=s[i];
                last[s[i]-'a'] =ans.size()-1;
            }
            else if(abs(idx-(int)ans.size())>k){
                ans+=s[i];
                last[s[i]-'a'] =ans.size()-1;
            }
            
        }
        return ans;
    }
};