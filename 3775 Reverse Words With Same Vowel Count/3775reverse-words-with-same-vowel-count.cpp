class Solution {
public:
    bool vol(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
    string reverseWords(string s) {
        int start=0,end=0;
        int cnt=0;
       vector<string>words;
        vector<int>vowels;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                words.push_back(temp);
                vowels.push_back(cnt);
                cnt=0;
                temp.clear();
            }
            else{ 
                if(vol(s[i])){
                    cnt++;
                }
                temp.push_back(s[i]);
                }
        }
        words.push_back(temp);
        vowels.push_back(cnt);
       int k=vowels[0];
        for(int i=1;i<words.size();i++){
            if(vowels[i]==k){
                reverse(words[i].begin(),words[i].end());
            }
        }
        string ans;
        for(auto& i:words){
            ans+=i;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};