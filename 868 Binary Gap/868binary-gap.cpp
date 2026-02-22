class Solution {
public:
    int binaryGap(int n) {
        string bin="";
        int m=n;
        while(m){
            if(m%2==0){
                bin+='0';
            }
            else{
                bin+='1';
            }
            m/=2;
        }
        vector<int>idx;
        for(int i=0;i<bin.size();i++){
            if(bin[i]=='1'){
                idx.push_back(i);
            }
        }
        int maxi=0;
        for(int i=0;i<idx.size()-1;i++){
            maxi=max(maxi , idx[i+1]-idx[i]);
        }
        return maxi;
    }
};