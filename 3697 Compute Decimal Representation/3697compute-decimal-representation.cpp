class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<long long>ans;
        long long a=n;
       long long p=1;
       
        while(a>0){
            int k=(a%10);
          if(k!=0)  ans.push_back(k*p);
           a=a/10;
            p=p*10;
        }
        sort(ans.begin(),ans.end(),greater<>());
        vector<int>res;
        for(int i=0;i<ans.size();i++){
            res.push_back((int)ans[i]);
        }
        return res;
    }
};