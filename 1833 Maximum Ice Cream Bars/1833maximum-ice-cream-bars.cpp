class Solution {
public:
    int maxIceCream(vector<int>& a, int coins) {
        sort(a.begin(),a.end());
       //  for(int i=0;i<a.size();i++) cout<<a[i];
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<=coins){
                cnt++;
                coins=coins-a[i];
            }
                else if(coins<a[i]||coins==0){
                    break;
                }
            
        }
        return cnt++;
    }
};