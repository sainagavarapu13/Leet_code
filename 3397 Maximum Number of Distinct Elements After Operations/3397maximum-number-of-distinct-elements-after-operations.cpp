class Solution {
public:
    int maxDistinctElements(vector<int>& a, int k) {
        set<int>set;
        int prev =INT_MIN;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            int left = a[i]-k;
            int right = a[i]+k;
            if(left >prev){
                set.insert(left);
                prev = left;
            }
            else{
                if(prev+1<=right){
                set.insert(prev+1);
                 prev+=1;
                }
                
            }
        }
        for(auto& i:set) cout<<i<<" ";
        return set.size();
    }
};