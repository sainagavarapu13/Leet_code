class Solution {
public:
    int longestCommonPrefix(vector<int>& a, vector<int>& b) {
        set<string>set;
        for(int i=0;i<a.size();i++){
        string temp = to_string(a[i]);
        string t1;
        for(int j=0;j<temp.size();j++){
            t1.push_back(temp[j]);
            set.insert(t1);
        }
        }
        int ans=0;
         for(int i=0;i<b.size();i++){
        string temp = to_string(b[i]);
        string t2;
        for(int j=0;j<temp.size();j++){
            t2.push_back(temp[j]);
           if(set.count(t2)){
            ans=max(ans,(int)t2.size());
           }
        }
        }
        return ans;
    }
};