class Solution {
public:
    bool num(char a){
        if(a>='0'&&a<='9'){
            return true;
        }
        return false;
    }
    bool alpha(char c){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c=='_')) return true;
        return false;
    }
    bool vaild(string& a){
        for(int i=0;i<a.size();i++){
            if((!num(a[i]))&&(!alpha(a[i]))) return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& a, vector<string>& b, vector<bool>& c) {
        set<string>s={"restaurant","pharmacy","grocery","electronics"};
        vector<pair<string,string>>p;
        for(int i=0;i<a.size();i++){
            if(c[i]==true){
                if(s.count(b[i])){
                    if(vaild(a[i])&&a[i]!=""){
                    p.push_back({b[i],a[i]});
                    }
                }
            }
        }
        sort(p.begin(),p.end(),[](auto& x,auto& y){
            if(x.first==y.first){
                return x.second<y.second;
            }
            else return x.first<y.first;
        });
        vector<string>ans;
        for(auto& i:p){
            cout<<i.first<<" "<<i.second<<"\n";
            ans.push_back(i.second);
        }
        return ans;
    }
};