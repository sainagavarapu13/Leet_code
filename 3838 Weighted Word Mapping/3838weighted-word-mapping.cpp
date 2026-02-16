class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for( auto i:words ){
            int sum=0;
            for( char j:i){
                sum+= weights[j-'a'];
            }
            ans+='a'+(26-(sum%26)-1);
        }
        return ans;
    }
};