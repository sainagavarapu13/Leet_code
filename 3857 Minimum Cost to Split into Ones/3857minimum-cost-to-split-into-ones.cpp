class Solution {
public:
    int minCost(int n) {
        vector<int> v;
        if(n!=1) v.push_back(n);
        int res = 0;
        while(v.size()!=0){
            int b = v.back();
            int a = b/2;
            int c = b -a;
            res += a*c;
            v.pop_back();
            if(a!=1) v.push_back(a);
            if(c!=1) v.push_back(c);
        }
        return res;
    }
};