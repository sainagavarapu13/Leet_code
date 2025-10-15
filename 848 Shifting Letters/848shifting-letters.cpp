class Solution {
public:
    string shiftingLetters(string s, vector<int>& a) {
        long long sum=0;
        for(long long i=a.size()-1;i>=0;i--){
            sum+=a[i];
            s[i]='a'+((s[i]-'a')+sum)%26;
        }
        return s;
    }
};