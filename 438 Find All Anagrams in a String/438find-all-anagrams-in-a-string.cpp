class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     vector<int>ans;
     int start=0,end=0;
     map<char,int>m,mp;
     for(auto& i:p) m[i]++;
     while(end<s.size()){
        mp[s[end]]++;
        while(mp[s[end]]>m[s[end]]){
           mp[s[start]]--;
           if (mp[s[start]] == 0)
            mp.erase(s[start]);
           start++;
        }
         if(mp==m){
            ans.push_back(start);
            mp[s[start]]--;
            start++;
        }
        end++;
     }   
     return ans;
    }
};