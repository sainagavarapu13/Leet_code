class Solution {
public:
    bool detectCapitalUse(string a) {
        int cap=0,small=0;
        for(auto& i:a){
            if(i>='A'&&i<='Z') cap++;
            else small++;
        }
        if(cap==0||small==0) return 1;
    else {
        if(cap==1&&a[0]>='A'&&a[0]<='Z') return 1;
        else return 0;

    }
    }
};