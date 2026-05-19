class Solution {
public:
    bool isvol(char k){
        char ch= tolower(k);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
    long long countVowels(string a) {
        int n=a.size();
        long long ans=0;
        for(int i=0;i<a.size();i++){
            if(isvol(a[i])){
                ans+=(long long)(n-i)*(long long)(i+1);
            }
        }
        return ans;
    }
};