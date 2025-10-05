class Solution {
public:
    int alternatingSum(vector<int>& a) {
        int i;
        int sum=0;
        for(i=0;i<a.size();i++){
            if(i%2!=0){
                a[i]=(-1)*a[i];
            }
            sum+=a[i];
        }
        return sum;
    }
    
};