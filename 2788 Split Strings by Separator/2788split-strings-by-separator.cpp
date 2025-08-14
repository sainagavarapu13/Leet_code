class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& a, char k) {
        vector<string>ans;
       int i,j;
       for(i=0;i<a.size();i++){
        string res;
        for(auto& j:a[i]){
            if(j!=k){
                res+=j;
            }
            else {
               if(!res.empty()){ans.push_back(res);
               res.clear();
               }
            }
        }
         if(!res.empty()) ans.push_back(res);
       }
       return ans;
    }
};