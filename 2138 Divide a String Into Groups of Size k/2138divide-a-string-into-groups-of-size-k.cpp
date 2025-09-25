class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        int rem=k-(n%k);
        vector<string>ans;
     if(rem%k!=0)  { while(rem--) s.push_back(fill);}
        for(int i=0;i<s.size();i+=k){
           string  temp=s.substr(i,k);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};