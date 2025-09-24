class Solution {
public:
    int maxConsecutive(int a, int b, vector<int>& v) {
         sort(v.begin(),v.end());
        int m=-1;
        m=max(m,v[0]-a);
        m=max(m,b-v.back());
       
        for(int i=1;i<v.size();i++){
            int k=v[i]-v[i-1];
            k=k-1;
            m=max(m,k);
        }
        return m;
    }
};