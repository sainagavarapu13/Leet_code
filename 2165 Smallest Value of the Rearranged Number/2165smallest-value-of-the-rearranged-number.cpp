class Solution {
public:
    long long smallestNumber(long long num) {
       string ans=to_string(num);
       string res;
       long long fin;
       if(num==0) return 0;
     if(num<0){ 
        res+='-';
     sort(ans.begin(),ans.end(),greater<>());
     int i=0;
     while(ans[i]!='-'&&i<ans.size()) {
        res+=ans[i];
        i++;
    }
         fin=stoll(res);
     }
     else{ 
         sort(ans.begin(),ans.end());
     int cnt=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]!='0'){
            res+=ans[i];
        }
        else cnt++;
    }
    int i=1;
    while(cnt--){
        res.insert(i,"0");
        i++;
    }
    fin=stoll(res);
         }
      
        return  fin;
    }
};