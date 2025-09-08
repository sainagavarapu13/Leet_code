class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int i,j;
        int sum=0,p=0;
        for(i=0;i<a.size();i++){
            p+=a[i];
            for(j=i+1;j<a.size();j++){
                if((j-i+1)%2!=0){
                    for(int I=i;I<=j;I++){
                        sum+=a[I];
                    }
                }
            }
        }
        return sum+p;
    }
};