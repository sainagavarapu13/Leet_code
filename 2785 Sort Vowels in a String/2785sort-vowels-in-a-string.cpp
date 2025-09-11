class Solution {
public:
    int vol(char c){

        char s=tolower(c);
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
            return 1;
        }
        return 0;
    }    
    string sortVowels(string s) {
        int len=s.size();
        string ans=s;
       
        string v;
        int i;
        vector<int>visit(len,0);
        for(i=0;i<s.size();i++){
            if(!vol(s[i])){
                visit[i]=1;
                ans[i]=s[i];
            }
            else{
                v.push_back(s[i]);
            }
        }
       for(auto& i: v) cout<<i;
        int p=0;
        sort(v.begin(),v.end());
        for(i=0;i<ans.size();i++){
            if(visit[i]==0){
                ans[i]=v[p];
                p++;
            }
        }
        return ans;
    }
};