class Solution {
public:
    string largestNumber(vector<int>& a) {
        vector<string>b;
        for(int i=0;i<a.size();i++){
            b.push_back(to_string(a[i]));
        }
        sort(b.begin(),b.end(),[](auto& x,auto& y){
            return x+y>y+x;
        });
        if(b[0]=="0") return "0";
        string ans;
        for(auto& i:b){
            ans+=i;
        }
        return ans;
    }
};