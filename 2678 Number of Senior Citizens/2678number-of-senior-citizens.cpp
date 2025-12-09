class Solution {
public:
    int countSeniors(vector<string>& d) {
        int a=0;
        for(int i=0;i<d.size();i++){
            int b = (d[i][11]-'0')*10 + (d[i][12]-'0');
            if(b>60) a++;
        }
        return a;
    }
};