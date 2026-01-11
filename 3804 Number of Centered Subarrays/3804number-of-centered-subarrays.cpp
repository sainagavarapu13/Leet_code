class Solution {
public:
        bool check(vector<int>&a,int start,int end,int k){
            for(int i=start;i<=end;i++){
                if(a[i]==k) return true;
            }
            return false;
        }
    int centeredSubarrays(vector<int>& a) {
        int i,j,cnt=0;
        for(i=0;i<a.size();i++){
            int sum = 0;
            for(j=i;j<a.size();j++){
                sum+=a[j];
               if( check(a,i,j,sum)){
                   cnt++;
               }
            }
        }
        return cnt;
    }
};