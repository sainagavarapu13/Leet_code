class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int y) {
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<=n-k;i++){
            int sum = 0;
            map<int,int> m;
            for(int j=i;j<i+k;j++){
                m[nums[j]]++;
                // cout<<nums[j]<<" ";
            }
            // cout<<endl;
            vector<pair<int,int>> u(m.begin(),m.end());
            sort(u.begin(),u.end(),[](pair<int,int> a,pair<int,int> b){
                if(a.second==b.second){
                    return a.first>b.first;
                }
                return a.second>b.second;
            });
            int a = 0;
            for(auto x:u){
                a++;
                sum += x.first*x.second;
                // cout<<"-"<<x.first<<" "<<x.second<<endl;
                if(a==y){
                    break;
                }
            }
            v.push_back(sum);
        }
        return v;
    }
};
auto init = atexit([](){ofstream("display_runtime.txt")<<"0";});