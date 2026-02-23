class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        vector<int>fre;
        for(auto& [n,c]:m){
            fre.push_back(c);
        }
        sort(fre.begin(),fre.end());
        int i=0;
        while(i<fre.size() && k!=0){
             int remove = min(fre[i], k); 
            fre[i] -= remove;
            k -= remove;
            i++;
        }
        int cnt=0;
        for(int i=0;i<fre.size();i++){
            if(fre[i]>0){
                cnt++;
            }
        }
        return cnt;
    }
};