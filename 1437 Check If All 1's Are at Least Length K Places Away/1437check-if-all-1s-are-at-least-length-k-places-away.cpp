class Solution {
public:
    bool kLengthApart(vector<int>& a, int k) {
        int i;
        int idx=-1;
        for(i=0;i<a.size();i++){
            if(a[i]==1){
                if(idx==-1) idx=i;
                else{
                    int h=abs(idx-i)-1;
                    if(h<k) return 0;
                   idx=i;
                }
            }
           
        }
         return 1;
    }
};