class Solution {
public:
    vector<int> numberOfPairs(vector<int>& a) {
        if(a.size()==1){
            vector<int>res(2);
            res[0]=0;
            res[1]=1;
            return res;
        }
        vector<int>f(101);
        for(int i=0;i<a.size();i++){
            f[a[i]]++;
        }
        int d=0;
        vector<int>res(2);
        for(int i=0;i<f.size();i++){
            if(f[i]>=2){
               d=d+(f[i]/2);
            }
        }
        int g=a.size()-2*d;
        res[0]=d;
        res[1]=g;
        return res;
    }
};