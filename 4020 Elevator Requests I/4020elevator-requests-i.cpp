class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int res = 0,b = 0;
        for(int i=0;i<requests.size();i++){
            res += abs(b-requests[i]);
            b = requests[i];
        }
        return res;
    }
};