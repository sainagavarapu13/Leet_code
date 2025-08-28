class Solution {
public:
    vector<int> diStringMatch(string a) {
        int minn=0;
        int maxx=a.size();
        vector<int>ans;
       
        for(int i=0;i<a.size();i++){
            if(a[i]=='I') {
                ans.push_back(minn);
                minn++;
            }
            else{
                ans.push_back(maxx);
                maxx--;
            }
        }
        if(a[a.size()-1]=='I'){
            int last=ans.back();
            ans.push_back(last+1);
        }
        else{
             int last=ans.back();
            ans.push_back(last-1);
        }
        return ans;
    }
};