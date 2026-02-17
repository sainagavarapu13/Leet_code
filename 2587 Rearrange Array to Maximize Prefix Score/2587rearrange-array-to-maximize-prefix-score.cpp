class Solution {
public:
    int maxScore(vector<int>& a) {
        long long sum=0,cnt=0;
        vector<long long>neg;
        for(int i=0;i<a.size();i++){
            if(a[i]>0){
                sum+=a[i];
                cnt++;
            }
            else{
                neg.push_back(a[i]);
            }
        }
        sort(neg.begin(),neg.end(),greater<>());
        int i;
        for( i=0;i<neg.size();i++){
            if(sum+neg[i]>0){
                sum+=neg[i];
                cnt++;
            }
        }
        
        return (int)cnt;
    }
};