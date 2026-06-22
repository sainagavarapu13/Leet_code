class Solution {
public:
    int maxNumberOfBalloons(string a) {
        set<char>set={'b','a','l','o','n'};
        map<char,int>m;
        for(auto& i:a){
            if(set.count(i))
            m[i]++;
        }
        int mini=a.size();
        for(auto&i:set){
            char n=i;
            int c=m[i];
            if(n=='l'||n=='o'){
                if(c%2==0){
                    mini=min(mini,c/2);
                }
                else{
                    mini=min(mini,(c-1)/2);
                }
            }
            else
            mini=min(mini,c);
        }
        return mini;
    }
};