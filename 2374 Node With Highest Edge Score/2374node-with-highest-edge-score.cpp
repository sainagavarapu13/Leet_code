class Solution {
public:
    int edgeScore(vector<int>& a) {
        vector<long long>sum(a.size(),0);
        long long i;
        for(i=0;i<a.size();i++){
            sum[a[i]]+=i;
        }
       auto& it=*max_element(sum.begin(),sum.end());
       for(i=0;i<sum.size();i++){
        if(sum[i]==it){ return (int)i;}
       }
       return 1;
    }
};