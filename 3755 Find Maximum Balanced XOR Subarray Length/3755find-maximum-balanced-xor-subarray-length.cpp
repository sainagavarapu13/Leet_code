class Solution {
public:
    int fun(vector<int>& a){
        map<pair<int,int>, int> mp;

        int x = 0;  
        int e = 0;   
        int o = 0;   

        int ans = 0;

        mp[{0, 0}] = -1;

        for(int i = 0; i < a.size(); i++) {

            x ^= a[i]; 

            if(a[i] % 2 == 0) e++;  
            else o++;

            int d = e - o;    

            pair<int,int> key = {x, d};

            if(mp.count(key)) {
                ans = max(ans, i - mp[key]);
            } else {
                mp[key] = i;  
            }
        }

        return ans;
    }
    int maxBalancedSubarray(vector<int>& a) {
        return fun(a);
        
    }
};