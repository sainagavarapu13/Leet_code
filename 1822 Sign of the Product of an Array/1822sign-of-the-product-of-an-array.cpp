class Solution {
public:
    int arraySign(vector<int>& a) {
        int c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0) return 0;
            if(a[i]<0) c++;
        }
        if(c%2==0) return 1;
        return -1;
    }
};