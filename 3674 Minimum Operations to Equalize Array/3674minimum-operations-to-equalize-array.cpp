class Solution {
public:
    int minOperations(vector<int>& a) {
        map<int,int>m;
        int equal=0;
        for(auto& i:a) m[i]++;
        for(auto& [n,c]:m) {
            if(c==a.size()){
                equal=1;
                break;
            }
            else{
                break;
            }
        }
        if(equal==1) return 0;
        else return 1;
    }
};