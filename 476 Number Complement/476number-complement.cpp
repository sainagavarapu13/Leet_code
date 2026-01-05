class Solution {
public:
    int findComplement(int a) {
        string temp;
        while(a){
            temp.push_back(a%2+'0');
            a=a/2;
        }
        int num=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='0'){
                num+=(pow(2,i));
            }
        }
        return num;
    }
};