class Solution {
public:
    bool sort(vector<int>& a){
        for(int i=0;i<a.size()-1;i++) {
            if(a[i]>a[i+1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& a) {
        int cnt=0;
        while(!sort(a)){
            cnt++;
            int mini =INT_MAX;
            for(int i=0;i<a.size()-1;i++){
                int sum =(a[i]+a[i+1]);
                mini = min(mini,sum);
            }
            for(int i=0;i<a.size()-1;i++){
               if(mini==a[i]+a[i+1]){
                a[i]+=a[i+1];
                a.erase(a.begin()+(i+1));
                break;
               }
            }
        }
        return cnt;
    }
};