class Solution {
public:
    int numberOfSpecialChars(string a) {
        map<char,pair<int,int>>m;
        for(int i=0;i<a.size();i++){
            if(a[i]>='a'&&a[i]<='z'){
                m[a[i]].first = i+1;
            }
            else if(m[tolower(a[i])].second==0){
                m[tolower(a[i])].second = i+1;
            }
        }
        int cnt=0;
        for(auto& [n,c]:m){
            int lower = c.first;
            int upper = c.second;
            if(lower==0||upper==0) continue;
            if(lower<upper){
                cnt++;
            }
        }
        return cnt;
    }
};