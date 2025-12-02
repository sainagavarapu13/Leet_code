class Solution {
public:
    int furthestDistanceFromOrigin(string a) {
        int l=0,r=0,c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='L'){
                l++;
            }
            else if(a[i]=='R'){
                r++;
            }
            else c++;
        }
        int d=abs(l-r);
        return d+c;
    }
};