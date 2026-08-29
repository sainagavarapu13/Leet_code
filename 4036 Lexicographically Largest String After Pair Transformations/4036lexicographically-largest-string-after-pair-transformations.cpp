class Solution {
public:
    vector<string> largestString(vector<int>& a) {
        vector<string>ans;
        for( int x : a){
            string s;
            while(x>=(1<<25)){
                s+='z';
                x-=(1<<25);
            }
            for( int j=24;j>=0;j--){
                if(x&(1<<j)){
                    s+=char('a'+j);
                }
            }
            //reverse(s.begin(), s.end());
            ans.push_back(s);
        } 
        return ans;
    }
};