class Solution {
public:
    int binaryGap(int n) {
        vector<int> v;
        int a = 0;
        while(n>0){
            int b = n%2;
            if(b==1) v.push_back(a);
            n = n/2;
            a++;
        }
        int res = 0;
        for(int i=0;i<v.size()-1;i++){
            // cout<<v[i]<<" "<<v[i+1]<<endl;
            res = max(res,v[i+1]-v[i]);
        }
        return res;
    }
};