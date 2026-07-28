class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int>m;
        for(char i : s){
            m[i]++;
        }
        vector<char>a(s.size(),'#');
        int ind =0;
        char ele;
        for( auto [ c, v]: m){
            if( v%2!=0) ele = c;
            while( v>1){
                a[ind]=c;
                a[(int)s.size()-ind-1] =c;
                v-=2;
                 ind++; 
            }
           
        }
        string ans;
        for( char i : a){
            if( i =='#') ans+=ele;
            else ans+=i;
            
        }
        return ans;
    }
};