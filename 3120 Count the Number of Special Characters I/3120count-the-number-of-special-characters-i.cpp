class Solution {
public:
    int numberOfSpecialChars(string a) {
        set<char>set,s;
        for(auto& i:a){
            if(i>='a'&&i<='z'){
                set.insert(i);
            }
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>='A'&&a[i]<='Z'){
                char ch=tolower(a[i]);
                if(set.count(ch)){
                    s.insert(ch);
                }
            }
        }
        return (int)s.size();
    }
};