class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int i=0,j;
        string a;
         if (s.empty()) return ans;
      
        while(i<s.size()){
            int idx=i;
            if(a.empty()) {
            a.push_back(s[i]);
             i++;
        }
            while(i<s.size()&&a.back()==s[i]){
                a.push_back(s[i]);
                i++;
            }
            if(a.size()>=3){
                int end=i-1;
                ans.push_back({idx,end});
               
            }
             a.clear();
        }
            return ans;
    }
};