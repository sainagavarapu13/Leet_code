class Solution {
public:
    int countVowelSubstrings(string word) {
        int n= word.size(),res =0;
        for(int k=0;k<n;k++){
            int a=0,e=0,i=0,o=0,u=0;
            for(int j=k;j<n;j++){
                if(word[j]=='a') a++;
                else if(word[j]=='e') e++;
                else if(word[j]=='i') i++;
                else if(word[j]=='o') o++;
                else if(word[j]=='u') u++;
                else break;
                if(a>0 && e>0 && i>0 && o>0 && u>0) res++;
                // cout<<word[k]<<" "<<res<<endl;
            }
        }
        return res;
    }
};