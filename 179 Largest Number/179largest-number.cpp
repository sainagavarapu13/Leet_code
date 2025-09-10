class Solution {
public:
    string largestNumber(vector<int>& b) {
        vector<string>a;
        for( auto& r : b){
            string k = to_string(r);
        
            a.push_back(k);
        }
        sort(a.begin(),a.end(),[](auto& x , auto& y){
            return x+y > y+x;
        });
        if( a[0]=="0") return "0";
        string res;
        for(auto& i : a){
            res+=i;
        }
        return res;
    }
};