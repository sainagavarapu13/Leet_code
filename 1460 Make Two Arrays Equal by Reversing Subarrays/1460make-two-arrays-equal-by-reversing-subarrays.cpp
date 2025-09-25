class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        map<int,int> c;
        map<int,int> b;
        for(int i=0;i<t.size();i++){
            c[t[i]]++;
            b[a[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(c[t[i]]!=b[t[i]]) return false;
        }
        return true;
    }
};