class Solution {
public:
    string largestPalindromic(string a) {
        int maxi=INT_MIN;
        map<char,int>m;
        for(auto& i:a){
            m[i]++;
        }
        string ans;
         int  times;
        for(auto& [n,c]:m){
           
            if(c%2!=0){
                maxi=max(maxi,n-'0');
            }
          
             if(c%2==0)   times=c/2;
             else times=(c-1)/2;
                while(times--){
                    ans.push_back(n);
            }
           
        }
        string temp=ans;
        reverse(ans.begin(),ans.end());
      if(maxi!=INT_MIN)  ans.push_back(maxi+'0');
        ans+=temp;
         ans.erase(0, ans.find_first_not_of('0'));
    ans.erase(ans.find_last_not_of('0') + 1);
    if(ans.size()==0) ans+='0';
        return ans;

    }
};