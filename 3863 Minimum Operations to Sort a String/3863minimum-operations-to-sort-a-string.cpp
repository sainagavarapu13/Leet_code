class Solution {
public:
    int minOperations(string s) {
        string a =s;
        sort(a.begin(),a.end());
        if(a==s) return 0;
        int l=0;
        while(l<s.size()&&s[l]==a[l]) l++;
        int r=s.size()-1;
        while(r>=0&&s[r]==a[r]) r--;
        if(l==0&&r==(int)a.size()-1){
            if(a.size()==2) return -1;
           for(int i=0;i<s.size();i++){
               if(s[i]==a[0]){
                   if(i!=a.size()-1) return 2;
               }
           }
            for(int i=0;i<s.size();i++){
               if(s[i]==a.back()){
                   if(i!=0) return 2;
               }
           }
             return 3;
        }
        return 1;
    }
};