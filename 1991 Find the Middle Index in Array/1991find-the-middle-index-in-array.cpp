class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        for(int i=0;i<n.size();i++){
            long long a = accumulate(n.begin(),n.begin()+i,0);
            long long b = accumulate(n.begin()+i+1,n.end(),0);
            if(a==b) return i;
        }
        return -1;
    }
};