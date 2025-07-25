class Solution {
public:
    int minOperations(vector<int>& n) {
        int cnt =0;
        int i =0;
        while(i<n.size()){
            if( n[i]==0){
                if( i+2 <=n.size()-1){
                    n[i+1] = n[i+1]==0 ? 1:0;
                    n[i+2] = n[i+2] ==0?1 : 0;
                    cnt++;
                }else{
                    return -1;
                }
            }
            i++;
        }

        return cnt;
    }
};