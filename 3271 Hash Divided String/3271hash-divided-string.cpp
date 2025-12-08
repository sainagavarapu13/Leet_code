class Solution {
public:
    string stringHash(string s, int k) {
        int sum=0;
        string res;
        for( int i=0;i<s.size();i+=k){
            int j =i;
            while(j<i+k ){
                sum+=s[j]-'a';
                j++;
            }
            res+=('a'+(sum%26));
            sum=0;

        }
        return res;
        
    }
};