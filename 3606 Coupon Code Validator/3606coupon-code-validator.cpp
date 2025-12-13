class Solution {
public:
    bool st(string s){
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')|| (s[i]=='_')){
                continue;
            }
            else{
                return 0;
            }
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& co, vector<string>& bu, vector<bool>& is) {
        vector<string> a,b,c,d,e;
        for(int i=0;i<bu.size();i++){
            if(is[i]){
                if(bu[i]=="electronics" && co[i].length()>0){
                    if(st(co[i])){
                        a.push_back(co[i]);
                    }
                }
                else if(bu[i]=="grocery"){
                    if(st(co[i]) && co[i].length()>0){
                        b.push_back(co[i]);
                    }
                }
                else if(bu[i]=="pharmacy"){
                    if(st(co[i]) && co[i].length()>0){
                        c.push_back(co[i]);
                    }
                }
                else if(bu[i]=="restaurant"){
                    if(st(co[i]) && co[i].length()>0){
                        d.push_back(co[i]);
                    }
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        for(int i=0;i<a.size();i++){
            e.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            e.push_back(b[i]);
        }
        for(int i=0;i<c.size();i++){
            e.push_back(c[i]);
        }
        for(int i=0;i<d.size();i++){
            e.push_back(d[i]);
        }
        return e;
    }
};