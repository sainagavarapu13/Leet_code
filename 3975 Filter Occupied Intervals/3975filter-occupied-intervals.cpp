class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& a, int s, int e){
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        int s1=a[0][0];
        int s2 = a[0][1];
        for(int i=1;i<a.size();i++){
            int start = a[i][0];
            int end = a[i][1];
           if(start <= s2+1){
               s2=max(s2,end);
           }
            else{
                if(s2<s||s1>e){
                    ans.push_back({s1,s2});
                }
                else{
                    if(s1<s){
                        ans.push_back({s1,s-1});
                    }
                    if(s2>e){
                        ans.push_back({e+1,s2});
                    }
                }
                s1=start;
               s2=end;
            }
        }
            if(s2<s||s1>e){
                ans.push_back({s1,s2});
            }
            else{
                if(s1<s){
                    ans.push_back({s1,s-1});
                }
                if(s2>e){
                    ans.push_back({e+1,s2});
                }
            }
        
        return ans;
    }
};