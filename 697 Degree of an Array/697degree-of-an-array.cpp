class Solution {
public:
    int Short_idx(vector<int>&a,int ele){
        int ind1,ind2,i;
        for(i=0;i<a.size();i++){
            if(ele==a[i]){
                ind1=i;
                break;
            }
        }
          for(i=a.size()-1;i>=0;i--){
            if(ele==a[i]){
                ind2=i;
                break;
            }
        }
        return (ind2-ind1)+1;
    }
    int findShortestSubArray(vector<int>& a) {
        map<int,int>mp;
        for(auto& i:a) mp[i]++;

        int m=-1,i,maxi;
        vector<int>ele;
        for(auto& [n,c]:mp){
            if(c>m){
                m=c;
            }
        }
        for(auto& [n,c]:mp){
            if(c==m){
                ele.push_back(n);
            }
        }
        for(auto& i: ele) cout<<i<<" ";
        m=INT_MAX;
        for(i=0;i<ele.size();i++){
           m=min(m, Short_idx(a,ele[i]));
        }
        return m;
    }
};