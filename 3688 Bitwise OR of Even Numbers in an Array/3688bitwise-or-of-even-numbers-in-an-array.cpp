class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& a) {
        int i,o=0;
        for(i=0;i<a.size();i++){
            if(a[i]%2==0){
                o=o|a[i];
            }
        }
        return o;
    }
};