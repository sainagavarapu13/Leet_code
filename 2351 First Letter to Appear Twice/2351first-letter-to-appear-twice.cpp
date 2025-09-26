class Solution {
public:
    char repeatedCharacter(string a) {
        int i;
        map<char,int>mp;
        for(i=0;i<a.size();i++){
            mp[a[i]]++;
           if( mp[a[i]]==2) return a[i];
        }
        return 'a';
    }
};