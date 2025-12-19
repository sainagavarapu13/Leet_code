class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l = 0,r=s.length(),b=r;
        vector<int> v;
        for(int i=0;i<r;i++){
            if(s[i]=='I') v.push_back(l++);
            if(s[i]=='D') v.push_back(b--);
            //cout<<s[i]<<endl; 
        }
        v.push_back(l);
        return v;
    }
};