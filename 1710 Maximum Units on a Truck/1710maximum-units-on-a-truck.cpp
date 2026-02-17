class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>>v;
        for(int i=0;i<boxTypes.size();i++){
            v.push_back({boxTypes[i][1],boxTypes[i][0]});
        }
        sort(v.rbegin(),v.rend());
        int  i = 0,res = 0;
        while(truckSize>0 && i<v.size()){
            if(truckSize>=v[i].second){
                res +=v[i].second * v[i].first;
                truckSize -=v[i].second;
                i++;
            }
            else{
                res += truckSize*v[i].first;
                break;
            }
        }
        return res;
    }
};