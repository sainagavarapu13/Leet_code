class Solution {
public:
    int absDifference(vector<int>& a, int k) {
         sort(a.begin(),a.end());
    int sum=0,cnt=0,i;
        for(i=0;i<k;i++){
           if(i<a.size()) sum+=a[i];
        }
        i=a.size()-1;
        while(i>=0&&k){
                cnt+=a[i];
            k--;
            i--;
        }
        cout<<sum<<" "<<cnt;
    return abs(sum-cnt);
    }
};