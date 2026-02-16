class Solution {
public:
    int prefixConnected(vector<string>& a, int k) {
        vector<string>temp;
        for(int i=0;i<a.size();i++){
            
           if(a[i].size() < k) continue;
                
            string K=a[i].substr(0,k);
            temp.push_back(K);
         
            
           
        }
        map<string,int>m;
        for(auto& i:temp){
            m[i]++;
        }
        int cnt=0;
        for(auto& [n,c]:m){
            if(c>=2){
                cnt++;
            }
        }
        return cnt;
    }
};