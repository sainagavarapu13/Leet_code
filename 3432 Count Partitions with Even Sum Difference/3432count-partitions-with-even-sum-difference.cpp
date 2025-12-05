class Solution {
public:
    int countPartitions(vector<int>& a) {
        int sum=0,cnt=0;
        for(auto& i:a){
            sum+=i;
        }
        int count=0;
        for(int i=0;i<a.size()-1;i++){
          cnt+=a[i];
          sum-=a[i];
          if((abs(sum-cnt))%2==0){
            count++;
          }  
        }
        return count;
    }
};