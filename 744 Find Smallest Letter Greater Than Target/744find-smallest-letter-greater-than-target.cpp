class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char k) {
        int i;
        for(i=0;i<a.size();i++){
            if(a[i]>k){
                return a[i];
            }
        }
        return a[0];
    }
};