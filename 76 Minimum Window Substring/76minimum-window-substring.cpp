class Solution {
public:
bool valid(map<char,int>&m,map<char,int>&mp){
    for(auto& [n,c]:m){
        if(mp[n]<c) return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        map<char,int>m;
        for(auto& i:t){
            m[i]++;
        }
        int st=-1,e=-1,ans=INT_MAX;
        map<char,int>mp;
        int start = 0,end=0;
        while(end<s.size()){
            mp[s[end]]++;
            while(start<=end&&m[s[start]]==0){
                mp[s[start]]--;
                start++;
            }
            while(valid(m,mp)){
            int len = end-start+1;
            if(len<ans){
                ans=len;
                st=start;
                e=end;
            }
            mp[s[start]]--;
            start++;
            while(start<=end&&m[s[start]]==0){
                mp[s[start]]--;
                start++;
            }
            }
            end++;
        }
        if(st==-1) return "";
        string res;
        for(int i=st;i<=e;i++){
            res+=s[i];
        }
        return res;
    }
};