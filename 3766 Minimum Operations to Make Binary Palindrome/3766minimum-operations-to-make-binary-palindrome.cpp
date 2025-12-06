class Solution {
public:
    bool fun(int a){
        if(a<0) return false;
        string string1;
        while(a>0){
            string1+=char('0'+(a&1));
            a >>= 1;
        }
        string res = string1;
        reverse(res.begin(),res.end());
        return string1==res;
    }
    vector<int> minOperations(vector<int>& nums) {
        vector<int> a;
        for(int x:nums){
            int k = 0;
            while(1){
                if(fun(x-k)){
                    a.push_back(k);
                    break;
                }
                if(fun(x+k)){
                    a.push_back(k);
                    break;
                }
                k++;
            }
        }
        return a;
    }
};