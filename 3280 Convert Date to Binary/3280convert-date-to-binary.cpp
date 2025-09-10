class Solution {
public:
    string tobin(string ans){
        int i;
        string res;
        int n=stoi(ans);
        while(n){
           res+=(n%2)+'0';
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    string convertDateToBinary(string a) {
        int i;
        string ans,res;
        for(i=0;i<a.size();i++){

            if(a[i]=='-'){
              
               res+= tobin(ans);
              
             if(i!=a.size()-1)  res+='-';
               ans.clear();
            }
            else{
                ans.push_back(a[i]);
            }
        }
        res+=tobin(ans);
        return res;
    }
};