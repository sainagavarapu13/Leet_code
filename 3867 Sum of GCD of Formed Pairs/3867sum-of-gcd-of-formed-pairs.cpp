class Solution {
public:
    long long gcdSum(vector<int>& a) {
        vector<long long>gcds ;
        int maxi=-1;
        for(int i=0;i<a.size();i++){
            maxi=max(maxi,a[i]);
       
            gcds.push_back(gcd(maxi,a[i]));
            
        }
        sort(gcds.begin(),gcds.end());
        long long ans=0;
        int size=gcds.size()-1;
        for(int i=0;i<gcds.size()/2;i++){
            ans+=gcd(gcds[i],gcds[size]);
            size--;
        }
       // for(auto& i:gcds) cout<<i<<" ";
        return ans;
    }
};