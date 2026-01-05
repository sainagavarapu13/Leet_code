class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int a=0,b=0,sum = 0,n = g.size(),m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(a<n && b<m){
            if(g[a]<=s[b]){
                sum++;
                a++;
                b++;
            }
            else{
                b++;
            }
        }
        return sum;
    }
};