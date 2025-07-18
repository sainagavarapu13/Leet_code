class Solution {
public:
    string convertToBase7(int n) {
        if(n==0) return "0";
        string s;
        int m=n;
        n=abs(n);
        while(n){
            int k=n%7;
            s.push_back(k+'0');
            n=n/7;
        }
        
        reverse(s.begin(),s.end());
        if(m<0) 
        s.insert(s.begin(),'-');
        return s;
    }
};