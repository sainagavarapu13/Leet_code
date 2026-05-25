class Solution {
public:
    int passwordStrength(string a) {
        set<char>lower,upper,digit,spl;
        for(int i=0;i<a.size();i++){
            if(a[i]>='a'&&a[i]<='z'){
                lower.insert(a[i]);
            }
            else if(a[i]>='A'&&a[i]<='Z'){
                upper.insert(a[i]);
            }
            else if(a[i]>='0'&&a[i]<='9'){
                digit.insert(a[i]);
            }
            else{
                spl.insert(a[i]);
            }
        }
        return ((int)lower.size())+(2*(int)upper.size())+(3*(int)digit.size())+(5*(int)spl.size());
    }
};