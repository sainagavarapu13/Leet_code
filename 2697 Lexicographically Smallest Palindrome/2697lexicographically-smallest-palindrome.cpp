class Solution {
public:
    string makeSmallestPalindrome(string s) {
       
        int start=0;
        int end=s.size()-1;
        while(start<=end){
           
               if(s[start]<s[end]){
                s[start]=s[start];
                s[end]=s[start];
                
               }
               else if(s[start]>s[end]){
                    s[start]=s[end];
                    s[end]=s[end];
                }
            
            start++;
            end--;
        }
        return s;
    }
};