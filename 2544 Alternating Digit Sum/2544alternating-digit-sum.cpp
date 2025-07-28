class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> a;
        int sum=0;
        while(n){
            a.push_back(n%10);
            n=n/10;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(i%2==0) sum+=a[i];
            else sum-=a[i];
        }
        return sum;
    }
};