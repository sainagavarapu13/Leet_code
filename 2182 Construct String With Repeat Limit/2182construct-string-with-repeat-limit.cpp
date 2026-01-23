class Solution {
public:
    string repeatLimitedString(string s, int k) {
    sort(s.begin(),s.end(),greater<>());
    int cnt=1,to_stop=s.size(),j=0;
    string ans;
    for(int i=0;i<s.size();i++){
        if(!ans.empty()&&ans.back()==s[i]){
            if(cnt<k){
                cnt++;
                ans+=s[i];
            }
            else{
                j=max(j,i+1);
                while(j<s.size()&&s[j]==s[i]) j++;
                if(j<s.size()){
                    ans+=s[j];
                    swap(s[i],s[j]);
                    cnt=1;
                }
                else break;

            }
        }
        else{
            ans.push_back(s[i]);
            cnt=1;
        }
           
    }
    
    return ans;

    }
};