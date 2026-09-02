class Solution {
public:
    bool uniformArray(vector<int>& a) {
        int even = 0 , odd = 0;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                even++;

            }
            else odd++;
        }
        if(odd==0||even==0) return 1;
        //even
        for(int i=0;i<a.size();i++){
            if(a[i]%2!=0){
                if(even>0) continue;
                else return 0;
            }
        }
         for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                if(odd>0) continue;
                else return 0;
            }
        }
        return 1;
    }
};