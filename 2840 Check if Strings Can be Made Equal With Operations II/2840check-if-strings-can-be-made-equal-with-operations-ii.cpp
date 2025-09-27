class Solution {
public:
    bool checkStrings(string s1, string s2) {
        map<char,int>eve;
        map<char,int>odd;
        int i;
        for(i=0;i<s1.size();i++){
            if(i%2==0) eve[s1[i]]++;
            else odd[s1[i]]++;
        }
        for(i=0;i<s2.size();i++){
            if(i%2==0){
                if(eve[s2[i]]){
                    eve[s2[i]]--;
                }
                else return 0;
            }
            else {
                if(odd[s2[i]]){
                    odd[s2[i]]--;
                }
                else return 0;
            }
        }
        return 1;
    }
};