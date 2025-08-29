class Solution {
public:
    int compress(vector<char>& a) {
       int i;
       int cnt=1;
       string ans;
       for(i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]) {
            cnt++;
        }
        else {
            ans.push_back(a[i]);
            if(cnt!=1&&cnt<10) ans.push_back(cnt+'0');
            else if(cnt>=10){
                ans+=to_string(cnt);
    
                
            }
            cnt=1;
        }
       }
        ans.push_back(a[i]);
           if(cnt!=1)  ans+=to_string(cnt);

    a.clear();
       for(i=0;i<ans.size();i++){
            a.push_back(ans[i]);
       }
       return ans.size();
    }
};