class Solution {
public:
bool canEat(int k,vector<int>a,int h){
    int cnt=0;
    for(int i=0;i<a.size();i++){
        int q;
        if(a[i]%k==0) q=0;
        else q=1;
       cnt+=(a[i]/k)+(q);
       if(cnt>h) return false;
    }
    if(cnt<=h) return true;
    else return false;
}
    int minEatingSpeed(vector<int>& a, int h) {
        int sum=0;
        int k = a.size();
        int start =1 ,end=0;
        for(int i=0;i<a.size();i++){
            end=max(end,a[i]);
        }
        while(start<end){
            int mid = (start+end)/2;
            if(canEat(mid,a,h)){
                end = mid;
            }
            else start = mid +1;
        }
        return start;
    }
};