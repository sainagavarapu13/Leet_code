class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char,int>m;
        for(auto& i: s) m[i]++;
        int maxi=-1;
        map<int,int>fq;
        for(auto& [n,c]: m){
            fq[c]++;
        }
        string ans;
        int num;
        for(auto& [n,c]: fq){
            if(c==maxi){
                num=max(num,n);
            }
           else if(c>maxi){
               maxi=c;
               num=n;
           }
            
        }
        for(auto& [n,c]:m){
            if(c==num) ans+=n;
        }
        return ans;
    }
};