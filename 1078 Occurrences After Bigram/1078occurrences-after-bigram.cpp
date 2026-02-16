class Solution {
public:
    vector<string> findOcurrences(string a, string b, string c) {
        vector<string>ans,temp;
        string t;
        for(int i=0;i<a.size();i++){
           if(a[i]==' '){
            temp.push_back(t);
            t="";
           }
           else{
            t+=a[i];
           }
        }
        temp.push_back(t);
        for(int i=0;i<temp.size()-2;i++){
            if(temp[i]==b&&temp[i+1]==c){
                ans.push_back(temp[i+2]);
            }
        }
        return ans;
    }
};