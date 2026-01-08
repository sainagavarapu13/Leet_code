class Solution {
public:
    int countWords(vector<string>& a, vector<string>& b) {
        map<string,int>m1;
        map<string,int>m2;
        for(auto& i:a){
            m1[i]++;
        }
        for(auto& i:b){
            m2[i]++;
        }
        int cnt =0;
        for(int i=0;i<a.size();i++){
            if(m1[a[i]]==1&&m2[a[i]]==1){
                cnt++;
            }
        }
        return cnt;
    }
};