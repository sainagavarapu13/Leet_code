class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& st, string s) {
        vector<int>ans;
       int r,c;
       for(int i=0;i<s.size();i++){
            r=st[0];
            c=st[1];
            int cnt=0;
            int j =i;
            while(r>=0&&c>=0&&r<n&&c<n && j<s.size()){
                if(s[j]=='R') c++;
                else if( s[j]=='L') c--;
                else if( s[j]=='D') r++;
                else r--;
                if(r>=0&&c>=0&&r<n&&c<n && j<s.size())
                cnt++;
                j++;
            }
            ans.push_back(cnt);
       }
       return ans;
    }
};