class Solution {
public:
    int d(int a){
        int b = 0;
        while(a){
            b +=a%10;
            a/=10;
        }
        return b;
    }
    int getLucky(string s, int k) {
        int a =0;
        vector<int> v;
        for(int i=0;i<s.length();i++){
            int b = (s[i] - 'a')+1;
            v.push_back(b);
        }
        for(int i=0;i<v.size();i++){
            while(v[i]){
                int b = v[i]%10;
                a +=b;
                v[i] /=10;
            }
        }
        if(k==1) return a;
        int c=a;
        for(int i=1;i<k;i++){
            c = d(c);
        }
        return c;
    }
};