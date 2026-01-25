class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const pair<char,int> &a,const pair<char,int> &b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        string res = "";
        for(auto x:v){
            for(int i=0;i<x.second;i++){
                res +=x.first;
            }
        }
        return res;
    }
};