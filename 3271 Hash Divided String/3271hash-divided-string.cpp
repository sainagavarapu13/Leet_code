class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.size();
        int r=n/k;
        int i,j;
        int sum=0;
        string res;
        for(i=0;i<s.size();i+=k){
            sum=0;
            for(j=i;j<i+k;j++){
                sum+=(s[j]-'a');
            }
            cout<<sum<<" ";
            sum=sum%26;
            res+=sum+'a';
            cout<<sum<<"\n";
        }
        return res;
    }
};