class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> v(n,0);
        int a = 1;
        while(candies>0){
            for(int i=0;i<n;i++){
                if(candies>a){
                    candies -=a;
                }
                else{
                    a = candies;
                    candies = 0;
                }
                v[i]+=a;
                a++;
            }
        }
        return v;
    }
};