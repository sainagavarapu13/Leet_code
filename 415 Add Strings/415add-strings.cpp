class Solution {
public:
    string addStrings(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int n=a.size();
        int m=b.size();
        int k=min(n,m);
        int i=0;
        int carry=0;
        string ans;
        while(m>n){
            a.push_back('0');
            n++;
        }
        while(m<n){
            b.push_back('0');
            m++;
        }
        while(n--){
            int sum=a[i]-'0'+b[i]-'0'+carry;
            carry=sum/10;
            ans.push_back((sum%10)+'0');
            i++;
        }
        if(carry) ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};