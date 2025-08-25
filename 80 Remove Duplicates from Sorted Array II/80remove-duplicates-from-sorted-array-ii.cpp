class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        map<int,int>m;
        for(auto& i: a){
            m[i]++;
        }
        int cnt=0;
        a.clear();
        for(auto& [n,c]: m){
           if(c<=2){ 
            cnt+=c;
            while(c--) a.push_back(n);
           }
           else{
             cnt+=2;
             a.push_back(n);
            a.push_back(n);
           }  
        }
        return cnt;
    }
};