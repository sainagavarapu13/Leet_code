class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long sum = accumulate(arr.begin(),arr.end(),0),b=0;
        if(sum%3!=0) return false;
        else{
            long long a = 0;
            for(int i=0;i<arr.size();i++){
                a +=arr[i];
                if(a == (sum/3)){
                    b++;
                    a = 0;
                }
            }
        }
        if(b>=3) return true;
        return false;
    }
};