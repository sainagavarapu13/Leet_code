class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<bitset<32>> v;
        int n = candidates.size();
        int maxii = INT_MIN;
        for(int x:candidates){
            v.push_back(bitset<32>(x));
            maxii = max(maxii,x);
        }
        int a = bit_width((unsigned int)maxii),b=0;
        for(int j=0;j<=a;j++){
            int s = 0;
            for(int i=0;i<n;i++){
                if(v[i][j]) s++;
                // cout<<v[i][j]<<" ";
            }
            // cout<<endl;
            b = max(s,b);
        }
        return b;
    }
};