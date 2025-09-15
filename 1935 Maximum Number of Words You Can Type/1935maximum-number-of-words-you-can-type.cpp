class Solution {
public:
    int check(string a,string b){
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=0;j<b.size();j++){
                if(a[i]==b[j]) return 0;
            }
        }
        return 1;
    }
    int canBeTypedWords(string a, string b) {
        int i,cnt=0;
        string t;
        for(i=0;i<a.size();i++){
            if(a[i]==' '){
               if(check(t,b)){
                cnt++;
               }
               for(auto& i:t) cout<<i<<" ";
               cout<<"\n";
               t.clear();
            }
           else t.push_back(a[i]);

        }
        if(check(t,b)) cnt++;
        return cnt;
    }
};