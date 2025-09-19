class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        map<int,int>mp;
        for(auto& i: a) mp[i]++;
    
        for(auto & [n,c]:mp){
            for(auto &[num,cnt]:mp){
                if(n!=num){
                    if(c==cnt) return 0;
                } 
            }
        }
        return 1;
    }
};