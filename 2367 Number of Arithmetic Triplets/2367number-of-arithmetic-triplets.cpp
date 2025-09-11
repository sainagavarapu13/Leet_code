class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int k) {
        int i,cnt=0;

        for(i=0;i<a.size();i++){
            
             int o=a[i]+k;
            if(count(a.begin(),a.end(),o)>=1){
                int l=o+k;
               
                if(count(a.begin(),a.end(),l)>=1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};