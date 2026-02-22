class Solution {
public:
    string check(string s, int one, int zero ,int n){
          string result = "";
         for (int i = 0; i < n; i++) {
            
            if (s[i] == '0') {
                if (one > 0) {
                    result += '1';
                    one--;
                } else {
                    result += '0';
                    zero--;
                }
            } 
            else { 
                if (zero > 0) {
                    result += '1';
                    zero--;
                } else {
                    result += '0';
                    one--;
                }
            }
        }
        
        return result;
    }
    string maximumXor(string s, string t) {
        int n = s.size();
        
        int zero = 0, one = 0;
        for (char c : t) {
            if (c == '0') zero++;
            else one++;
        }
        return check( s, one, zero,n);
      
       
    }
};