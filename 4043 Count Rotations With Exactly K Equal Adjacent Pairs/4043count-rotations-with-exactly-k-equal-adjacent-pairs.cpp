class Solution {
public:
    int countRotations(string s, int k) {
        int res = 0;
        map<int,int> m;
        for(int i=0;i<s.size();i++){
            int c = 0;
            string t = s.substr(i) + s.substr(0,i);
            // cout<<t<<endl;
            for(int j=1;j<t.size();j++){
                if(t[j]==t[j-1]) c++;
            }
            m[c]++;
        }
        return m[k];
    }
};