class Solution {
public:
    int countCompleteSubarrays(vector<int>& a) {
        set<int>s;
        for(auto& i:a){
            s.insert(i);
        }
        int dis=s.size(),cnt=0;
        for(int i=0;i<a.size();i++){
            set<int>set;
            for(int j=i;j<a.size();j++){
                set.insert(a[j]);
                if(set.size()==dis) cnt++;
            }
        }
        return cnt;
    }
};