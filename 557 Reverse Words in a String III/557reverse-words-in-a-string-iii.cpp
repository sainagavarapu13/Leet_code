class Solution {
public:
    string reverseWords(string a) {
        int s=0, e=0;
        while( e<a.size()){
            if(a[e]!=' '){
                e++;
            }else{
                reverse(a.begin()+s, a.begin()+e);
                e++;
                s=e;
            }
        }
        reverse(a.begin()+s, a.begin()+e);
        return a;

    }
};