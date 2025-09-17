class Solution {
public:
    int maxDistance(vector<int>& a) {
        int i,j;
        int m=-1;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(a[i]!=a[j]){
                    m=max(m,(j-i));
                }
            }
        }
        return m;
    }
};