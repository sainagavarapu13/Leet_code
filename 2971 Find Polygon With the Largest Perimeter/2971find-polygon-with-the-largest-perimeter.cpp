class Solution {
public:
    long long largestPerimeter(vector<int>& a) {
        vector<long long>pre;
        long long sum=0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            pre.push_back(sum);
             sum+=(long long)a[i];
        }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]<pre[i]&&i>=2){
                return (long long)pre[i]+(long long)a[i];
            }
        }
        return -1;
    }
};