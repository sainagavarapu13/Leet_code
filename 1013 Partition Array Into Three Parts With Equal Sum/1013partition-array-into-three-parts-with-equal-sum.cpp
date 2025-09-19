class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& a) {
        int sum=0,i,z=0;
        for(i=0;i<a.size();i++){
            sum+=a[i];
            if(a[i]==0) z++;
        }if(z==a.size()) return 1;
        if(sum%3!=0) return 0;
        int each=(sum)/3;
        i=0;
        sum=0;
        while(i<a.size()){
            sum+=a[i];
            i++;
            if(sum==each) break;
        }
        cout<<i;
        cout<<sum;
        if(i==0||i==a.size()-1) return 0;
        sum=0;
         while(i<a.size()){
            sum+=a[i];
            i++;
            if(sum==each) break;
        }
         if(i==0||sum!=each||i==a.size()) return 0;
        return true;
    }
};