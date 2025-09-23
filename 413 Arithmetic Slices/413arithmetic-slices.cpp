class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        for(int i=1;i<a.size();i++){
            a[i-1]=a[i-1]-a[i];
        }
        int sum=0;
        int cnt=0;
        for(int i=1;i<a.size()-1;i++){
                if( a[i-1]==a[i]){ cnt++;
                sum+=cnt;}
                else{
                    
                    cnt=0;
                }
        }
        
        return sum;
    }
};