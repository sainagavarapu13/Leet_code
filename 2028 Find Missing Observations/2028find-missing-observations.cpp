class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = accumulate(rolls.begin(),rolls.end(),0);
        int b = (rolls.size()+n)*mean - sum;
        vector<int> v;
        int a = b/n,c=n;
        float f = b/(n*1.0);
        if(f>6 || a<=0) return {};
        for(int i=0;i<n;i++){
            int a = b/c;
            if((a*n)!=b){
                v.push_back(a);
                b = b - a;
                c--;
            }
            else{
                v.push_back(a);
                b = b - a;
                c--;
            }
        }
        return v;
    }
};