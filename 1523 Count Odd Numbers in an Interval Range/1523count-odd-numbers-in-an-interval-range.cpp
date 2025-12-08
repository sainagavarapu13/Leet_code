class Solution {
public:
    int countOdds(int a, int b) {
        int cnt=b-a+1;
        if(  cnt%2==0){
            return (cnt/2);
        }else {if(a%2 ==1 ) return (cnt/2)+1;
                 }
        return cnt/2;
    }
};