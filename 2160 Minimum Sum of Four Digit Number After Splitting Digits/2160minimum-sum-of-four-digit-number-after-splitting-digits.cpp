class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int a=0;
        while(num){
            v.push_back(num%10);
            num = num/10;
        }
        sort(v.begin(),v.end());
        if(v[0]==0 && v[1]==0) return v[2]+v[3];
        else if(v[0]==0) return (v[1]*10 + v[3])+v[2];
        else return (v[0]*10+v[3])+(v[1]*10+v[2]);
        return a;
    }
};