class Solution {
public:
    string bin(int n){
    string ans="";
    while(n){
        ans+=(n%2)+'0';
        n/=2;
    }
   // reverse(ans.begin(),ans.end());
    return ans;
}

    vector<int> evenOddBit(int n) {
        string binary = bin(n);
        int eve=0,odd=0;
        cout<<binary;
        for(int i=0;i<binary.size();i++){
            if(binary[i]=='1'){
                if(i%2==0) eve++;
                else odd++;
            }
        }
        vector<int>ans = {eve,odd};
        return ans;
        
    }
};