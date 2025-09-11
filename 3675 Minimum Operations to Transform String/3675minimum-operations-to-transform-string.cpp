class Solution {
public:
    int minOperations(string s) {
       
        vector<int>diff;
        int i=0;
        int m=0;
       sort(s.begin(),s.end());
     
        
            while(i<s.size()&&s[i]=='a') {
                i++;
            }
           if(i==s.size()) return 0;
         
         m=26-(s[i]-'a');
        return m;
        
    }
};