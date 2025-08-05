class Solution {
public:
    int minOperations(vector<int>& a) {
        int i,sum=0;
        for(i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
                sum+=(a[i]-a[i+1]+1);
                a[i+1]=a[i+1]+(a[i]-a[i+1]+1);
                cout<<sum<<"\n";
            }
        }
        return sum;
    }
};