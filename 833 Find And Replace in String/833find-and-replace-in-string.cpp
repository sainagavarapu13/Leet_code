class Solution {
public:
    string findReplaceString(string s, vector<int>& ind, vector<string>& from, vector<string>& to) {
        int k=ind.size();
        int n=s.size();
        vector<pair<string,int>>temp(n,{"&",0});
        for(int i=0;i<k;i++){
            int start_id = ind[i];
            string t=s.substr(start_id,(int)from[i].size());
            if(t==from[i]){
                temp[start_id] = {to[i],from[i].size()};
            }
           
        }
        string ans;
       
        int i=0;
        while(i<s.size()){
            int cnt;
            if(temp[i].first=="&"){
                ans+=s[i];
                cnt=1;
            }
            else {
                string st=temp[i].first;
                cnt=temp[i].second;
                for(auto& u:st){
                   ans+=u;
                }
            }
            i+=cnt;
        }
        return ans;
    }
};