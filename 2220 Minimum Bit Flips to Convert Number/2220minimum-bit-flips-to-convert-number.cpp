class Solution {
public:
    string bin(int a){
        string ans;
        while(a){
            ans+=(a%2)+'0';
            a=a/2;
        }
       
        return ans;
    }
    int minBitFlips(int start, int goal) {
        string a=bin(start);
        string b=bin(goal);
        int n=a.size();
        int m=b.size();
        while(n>m){
            b.push_back('0');
            m++;
        }
        while(n<m){
            a.push_back('0');
            n++;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0,cnt=0;
        while(n--){
            if(a[i]!=b[i]){
                cnt++;
            }
            i++;
        }
        //cout<<a<<" "<<b;
        return cnt;
    }
};