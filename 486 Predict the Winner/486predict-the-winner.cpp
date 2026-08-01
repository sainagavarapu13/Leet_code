class Solution {
public:
    bool check(vector<int>& a , int start ,int end , int s_a ,int s_b,int turn){
        if(start>end){
            return s_a>=s_b;
        }
        if(turn == 0){
          return  check(a,start+1,end,s_a+a[start] , s_b , 1)||
                 check(a,start,end-1 , s_a+a[end] , s_b , 1);
        }
        else{
            return  check(a,start+1,end,s_a , s_b+a[start] , 0)&&
                   check(a,start,end-1 , s_a , s_b+a[end] , 0);
        }
    }
    bool predictTheWinner(vector<int>& a) {
        return check(a,0,a.size()-1 , 0,0 ,0);
    }
};