class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        priority_queue<pair<int,char>,vector<pair<int,char>>> p;
        for(auto x:m){
            p.push({x.second,x.first});
        }
        string res = "";
        while(!p.empty()){
            auto a = p.top();
            p.pop();
            if(p.empty()){
                res+= a.second;
                a.first--;
                if(a.first>0) p.push(a);
                continue;
            }
            auto b = p.top();
            p.pop();
            res += a.second;
            res += b.second;
            a.first--;
            if(a.first>0) p.push(a);
            b.first--;
            if(b.first>0) p.push(b);
        }
        int n = res.length();
        if((n>=2 && res[n-1]!=res[n-2]) || n==1) return res;
        return "";
    }
};