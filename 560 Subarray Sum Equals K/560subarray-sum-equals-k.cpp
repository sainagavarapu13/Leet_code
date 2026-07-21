class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
       vector<int>pre;
       int sum=0;
       int ans=0;
        map<int,int>m;
         m[sum]++;
       for(int i=0;i<a.size();i++){
        sum+=a[i];
        int s = sum-k;
            if(m[s]>0){
                
                ans+=m[s];
            }
            m[sum]++;
       }
       return ans;
    }
};