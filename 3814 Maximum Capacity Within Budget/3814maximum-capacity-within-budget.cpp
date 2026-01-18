class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n = costs.size();
        vector<pair<int,int>> m;
        for(int i=0;i<n;i++){
            m.push_back({costs[i],capacity[i]});
        }
        sort(m.begin(),m.end());
        int maxi= 0;
        vector<int> pre(n);
        pre[0] = m[0].second;
        for(int i=1;i<n;i++){
            pre[i] = max(pre[i-1],m[i].second);
        }
        for(int i=0;i<n;i++){
            if(m[i].first<budget){
                maxi = max(maxi,m[i].second);
            }
            int r = budget-m[i].first-1;
            if(r<=0) continue;
            int l=0,h = n-1,b=-1;
            while(l<=h){
                int mid = (l+h)/2;
                if(m[mid].first<=r){
                    b = mid;
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
            if(b!=-1){
                int c = (b==i) ? i-1: min(b,i-1);
                if(c>=0) maxi = max(maxi,m[i].second+pre[c]);
            }
        }
        return maxi;
    }
};