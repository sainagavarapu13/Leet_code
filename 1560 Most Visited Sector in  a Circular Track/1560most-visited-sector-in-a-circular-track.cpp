class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        map<int,int> m;
        vector<int>v;
        if(n==0) return v;
        int a=rounds.size(),b=rounds[0],max = 0;;
        for(int i=0;i<rounds.size();i++){
            int c = rounds[i];
            int j = b;
            for(j;j!=c;){
                m[j]++;
                if(j==n){
                    j = 1;
                    continue;
                }
                j++;
            }
            b =j;
        }
        m[b]++;
        for(auto x : m){
            if(x.second>max){
                    max = x.second;
                }
        }
        for(auto x : m){
            if(x.second == max){
                v.push_back(x.first);
            }
        }
        return v;
    }
};