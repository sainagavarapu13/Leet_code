class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi = -1,n=num.size();
        for(int i=0;i<=n-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                int z = stoi(num.substr(i,3));
                maxi = max(maxi,z);
            }
        }
        if(maxi==-1) return "";
        if(maxi==0) return "000";
        return to_string(maxi);
    }
};