class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& a, string s) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            int x = a[0];
            int y = a[1];
            int cnt=0;
            for(int j = i;j<s.size();j++){
                if(s[j]=='L'){
                    if(y==0){
                        //ans.push_back(y-x);
                        break;
                    }
                    y--;
                }
                if(s[j]=='R'){
                    if(y==n-1){
                        //ans.push_back(y-x);
                        break;
                    }
                    y++;
                }
                if(s[j]=='U'){
                    if(x==0){
                        //ans.push_back(y-x);
                        break;
                    }
                    x--;
                }
                if(s[j]=='D'){
                    if(x==n-1){
                        //ans.push_back(y-x);
                        break;
                    }
                    x++;
                }
               cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};