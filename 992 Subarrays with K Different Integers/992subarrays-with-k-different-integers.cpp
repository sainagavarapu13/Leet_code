class Solution {
public:
    int atMost(vector<int>& a, int k){
         int start=0,end=0;
        map<int,int>m;
        int cnt=0;
        while(end<a.size()){
            m[a[end]]++;
            while(m.size()>k){
               
                m[a[start]]--;
               
                if(m[a[start]]==0){
                    m.erase(a[start]);
                }
                 start++;
            }
            cnt+=(end-start+1);
            end++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& a, int k) {
       return atMost(a,k)-atMost(a,k-1);
    }
};