class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int res = 0;
        if(s>=0 && n==0) return true;
        if(s==0 && n>0) return false;
        if((flowerbed[0]==0 && s==1) || (flowerbed[0]==0 && flowerbed[1]==0)) {
            flowerbed[0]=1;
            res++;
        }
        for(int i=1;i<s-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                flowerbed[i] = 1;
                res++;
            }
            if(i==s-2 && flowerbed[i]==0 && flowerbed[i+1]==0) res++;
            if(res>=n) return true;
        }
        if(res>=n) return true;
        return false;
    }
};