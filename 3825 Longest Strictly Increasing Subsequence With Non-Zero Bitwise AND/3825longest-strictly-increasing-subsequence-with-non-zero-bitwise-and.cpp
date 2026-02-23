class Solution {
public:
    int len(vector<int>& a){
        vector<int>temp;
        for(auto& i : a){
            if(temp.empty() || temp.back()<i){
                temp.push_back(i);
               
            }
            else{
                auto it = lower_bound(temp.begin(),temp.end(),i);
                *it = i;
            }
        }
        return temp.size();
    }
    int longestSubsequence(vector<int>& a) {
        int maxi = 0;
        for(int i=0;i<31;i++){
            vector<int>temp;
            for(auto& j:a){
                if((j&(1<<i))){
                    temp.push_back(j);
                }
            }
            maxi = max(maxi,len(temp));
        }
        return maxi;
    }
};