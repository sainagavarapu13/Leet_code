class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int res = 0,n = speed.size(),c = INT_MAX;
        for(int i = n-1;i>=0;i--){
            if(i==n-1 || (long long)position[i+1]-position[i] > distance){
                if(speed[i]<= c){
                    res++;
                    c = speed[i];
                }
            }
        }
        return res;
    }
};