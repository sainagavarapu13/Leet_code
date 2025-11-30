class Solution {
public:
    int fun(string x){
        unordered_set<char> a;  
        int b = 0;              

        for(char c : x) {
            if(!a.count(c)) {   
                b++;           
                a.insert(c);   
            }
        }
        return b;
    }
    int maxDistinct(string s) {
        return fun(s);
    }
};