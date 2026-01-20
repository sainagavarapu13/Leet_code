class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& a) {
       vector<pair<int,int>>pair;
       for(int i=0;i<a.size();i++){
        for(int j =0;j<a[i].size();j++){
             pair.push_back({a[i][j],i});
        }
       }
       sort(pair.begin(),pair.end());
       vector<int>count(a.size(),0);
       int cnt = 0;
       int left = 0,low = -1,high = -1;
       for(int i=0;i<pair.size();i++){
        if(count[pair[i].second]==0){
            cnt++;
            count[pair[i].second]++;
        }
        else count[pair[i].second]++;
        while(cnt==a.size()){
            if(low==-1&&high==-1){
             low=pair[left].first;
            high = pair[i].first;
            }
           else{
            int diff1 = high-low;
            int diff2 = pair[i].first - pair[left].first;
            if((diff1==diff2&&low>pair[left].first)||diff1>diff2){
                    low=pair[left].first;
                    high = pair[i].first;
             }

           }
            if(count[pair[left].second]>0) count[pair[left].second]--;
            if(count[pair[left].second]==0) cnt--;
            left++;
        }
       }
       return {low,high};
    }
};