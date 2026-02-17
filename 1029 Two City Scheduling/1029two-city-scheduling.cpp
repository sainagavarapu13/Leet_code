class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& a) {
        vector<pair<int,pair<int,int>>>diff;
        for(auto& i:a){
            diff.push_back({i[0]-i[1],{i[0],i[1]}});
        }
        sort(diff.begin(),diff.end());
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                sum+=diff[i].second.first;
            }
            else{
                sum+=diff[i].second.second;
            }
        }
        return sum;
    }
};