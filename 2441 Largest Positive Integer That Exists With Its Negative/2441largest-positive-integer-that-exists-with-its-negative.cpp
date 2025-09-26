class Solution {
public:
    int findMaxK(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
        for(int i=0;i<a.size();i++){
            if(count(a.begin(),a.end(),(-1)*a[i])){
                return a[i];
            }
        }
        return -1;
    }
};