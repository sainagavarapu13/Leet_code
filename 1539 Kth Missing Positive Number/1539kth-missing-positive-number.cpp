class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int i;
        priority_queue<int,vector<int>,greater<>>pq;
        for(i=1;i<=a.back();i++){
            if(count(a.begin(),a.end(),i)==0){
                pq.push(i);
            }
            if(pq.size()==k) break;
        }
        int cnt=k;
        while(!pq.empty()){
           
           
            
             if(cnt==1){
                return pq.top();
             }
              cnt--;
               pq.pop();

        }
        return a[a.size()-1]+cnt;
    }
};