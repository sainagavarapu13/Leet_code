class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        set<pair<int,int>>set;
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(abs(a[i]-a[j])==k){
                    if(!set.count({a[i],a[j]})){
                        if(!set.count({a[j],a[i]})){
                            set.insert({a[i],a[j]});
                        }
                    }
                }
            }
        }
       
        return set.size();
    }
};