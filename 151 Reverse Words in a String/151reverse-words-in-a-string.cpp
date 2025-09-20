class Solution {
public:
    string reverseWords(string s) {
        string ans;
        vector<string>temp;
        int i,p=0,k=s.size()-1;
        while(s[p]==' ') p++;
        while(s[k]==' ') k--;
        for(i=p;i<=k;i++){
            
            if(i!=s.size()-1&&s[i]==' '&&s[i+1]==' ') continue;
            if(s[i]==' '){
                temp.push_back(ans);
                ans.clear();
            }
            else ans.push_back(s[i]);
        }
        temp.push_back(ans);
        reverse(temp.begin(),temp.end());
        ans.clear();
        for(i=0;i<temp.size();i++){
            ans+=temp[i];
            if(i!=temp.size()-1) ans+=' ';
        }
        return ans;
    }
};