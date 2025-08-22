class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        sort(a.begin(),a.end());
        string first=a[0];
        string last=a.back();
        int i=0;
        string ans;
       while(i<first.size()&&i<last.size()){
            if(first[i]!=last[i]) break;
            else{
                ans+=first[i];
            }
            i++;
       }
       return ans;
    }
};