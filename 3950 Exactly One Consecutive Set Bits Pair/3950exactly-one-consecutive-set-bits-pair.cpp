class Solution {
public:

    bool consecutiveSetBits(int n) {

        string bin="";

        while(n){

            bin += ((n%2)+'0');

            n/=2;
        }

        reverse(bin.begin(),bin.end());

        int cnt=0;

        for(int i=1;i<bin.size();i++){

            if(bin[i]=='1' &&
               bin[i-1]=='1'){

                cnt++;
            }
        }

        return cnt==1;
    }
};