class Solution {
public:
    vector<string> commonChars(vector<string>& a) {
        int i;
    
     map<string,int>min_map;
     for(i=0;i<26;i++){
        string ch(1,i+'a');
        min_map[ch]=INT_MAX;
     }
    for(i=0;i<a.size();i++){
         map<string,int>m;
        for(int j=0;a[i][j]!='\0';j++){
            string temp(1,a[i][j]);
           m[temp]++;
          
        }
         for (auto& [ch, count] : min_map) {
                min_map[ch] = min(min_map[ch], m[ch]);
            }
    }
   
        
    vector<string>ans;
    for(auto& [n,c]:min_map){
        if(c!=INT_MAX){
            while(c--){
                ans.push_back(n);
            }
        }
    }
    return ans;
    }
};